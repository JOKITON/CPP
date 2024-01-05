/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:44:32 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/05 17:15:38 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) : _size(0), _deque(), _list() {
	/* std::cout << "[PmergeMe] Default constructor has been called" << std::endl; */
}

PmergeMe::~PmergeMe( void ) {
	/* std::cout << "[PmergeMe] Default destructor has been called." << std::endl; */
}

size_t	PmergeMe::getArSize( char **ar ) {
	size_t	i;
	
	for (i = 1; ar[i]; i++)
		;
	return (i - 1);
}

void	PmergeMe::printDeque( char	flag ) {

	std::deque<unsigned int>::iterator	ptDeque;
	if (flag == BEFORE)
		std::cout << "Before: ";
	else
		std::cout << "After: ";
	for (ptDeque = _deque.begin(); ptDeque != _deque.end(); ptDeque++) {
		std::cout << *ptDeque << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printList( char	flag ) {

	std::list<unsigned int>::iterator	ptList;
	if (flag == BEFORE)
		std::cout << "Before: ";
	else
		std::cout << "After: ";
	for (ptList = _list.begin(); ptList != _list.end(); ptList++) {
		std::cout << *ptList << " ";
	}
	std::cout << std::endl;
}
	

void	PmergeMe::printTime( void ) const{
	// std::cout << "Time to process a range of " << _size << " elements with std::list : " << _timeList << " us" << std::endl;

	// std::cout << "Time to process a range of " << _size << " elements with std::forward_deque : " << _timeForwardList << " us" << std::endl;
}

bool	PmergeMe::insertContainers( char	**ar ) {

	for (size_t i = 0; i < _size; i++) {
		int numb = atoi(ar[i + 1]);
		if (numb < 0)
			return false;
		_deque.push_back(atoi(ar[i + 1]));
		_list.push_back(atoi(ar[i + 1]));
	}
	return true;
}

void	PmergeMe::sort( char	**args ) {
	_size = getArSize( args );
	
	if (insertContainers( args ) == false) {
		/* Standard output */
		std::cout << "Error" << std::endl;
		return ;
	}

	printDeque(BEFORE);
	struct	timeval	timeStart, timeEnd;
	gettimeofday(&timeStart, 0);
	mergeInsertSortDeque( _deque );
	gettimeofday(&timeEnd, 0);
	long microseconds = timeEnd.tv_usec - timeStart.tv_usec;
	printDeque(AFTER);
	std::cout << "Time to process a range of " << _size << " elements with std::[deque] : " << microseconds << " microseconds"<< std::endl;

	// printList(BEFORE);
	gettimeofday(&timeStart, 0);
	mergeInsertSortList( _list );
	gettimeofday(&timeEnd, 0);
	microseconds = timeEnd.tv_usec - timeStart.tv_usec;
	// printList(AFTER);
	std::cout << "Time to process a range of " << _size << " elements with std::[list] : " << microseconds << " microseconds" << std::endl;
	// system("leaks Pmerge");
}

void PmergeMe::insertionSortDeque(std::deque<unsigned int>& container, unsigned int size) {
    unsigned int i, key;
	int			j;
    for (i = 1; i < size; i++) {
        key = container[i];
        j = i - 1;
 
        while (j >= 0 && container[j] > key) {
            container[j + 1] = container[j];
            j = j - 1;
        }
        container[j + 1] = key;
    }
}

void	PmergeMe::insertionSortList(std::list<unsigned int>& container) {
	std::list<unsigned int>::iterator j;
    unsigned int key;

    for (std::list<unsigned int>::iterator it = std::next(container.begin()); it != container.end(); ++it) {
        key = *it;
        j = std::prev(it);

        while (j != container.begin() && *j > key) {
            *std::next(j) = *j;  // Assign the iterator, not the value
            --j;
        }

        *std::next(j) = key;  // Assign the iterator, not the value
    }
}

void PmergeMe::mergeInsertSortDeque( std::deque<unsigned int>& containerDeque ) {
	if (containerDeque.size() <= 16)
		insertionSortDeque(containerDeque, containerDeque.size());
	else {
		std::deque<unsigned int> leftDeque(containerDeque.begin(), containerDeque.begin() + containerDeque.size() / 2);
		std::deque<unsigned int> rightDeque(containerDeque.begin() + containerDeque.size() / 2, containerDeque.end());

		mergeInsertSortDeque( leftDeque );
		mergeInsertSortDeque( rightDeque );

		containerDeque.clear();
		mergeDeque( containerDeque, leftDeque, rightDeque );
	}

}
void PmergeMe::mergeInsertSortList( std::list<unsigned int>& containerList ) {
		if (containerList.size() <= 16) // insertionSort works best in small stacks
			insertionSortList(containerList);
		else {
			// We conveniently split the stack into two, so our algorimth can work more efficiently
			std::list<unsigned int> leftList(containerList.begin(), std::next(containerList.begin(), containerList.size() / 2));
			std::list<unsigned int> rightList(std::next(containerList.begin(), containerList.size() / 2), containerList.end());

			mergeInsertSortList( leftList );
			mergeInsertSortList( rightList );

			containerList.splice(containerList.end(), leftList); // splice makes it far more efficient
			containerList.splice(containerList.end(), rightList);
			mergeList( containerList, leftList, rightList );
		}
}

void PmergeMe::mergeDeque( std::deque<unsigned int>& result, std::deque<unsigned int>& leftDeque, std::deque<unsigned int>& rightDeque ) {
    std::deque<unsigned int>::iterator leftIt = leftDeque.begin();
	std::deque<unsigned int>::iterator rightIt = rightDeque.begin();

	while ( leftIt != leftDeque.end() && rightIt != rightDeque.end() ) {
		if (*leftIt < *rightIt) {
			result.push_back(*leftIt);
			++leftIt;
		} else {
			result.push_back(*rightIt);
			++rightIt;
		}
	}

	result.insert( result.end(), leftIt, leftDeque.end() );
	result.insert( result.end(), rightIt, rightDeque.end() );
}

void PmergeMe::mergeList( std::list<unsigned int>& result, std::list<unsigned int>& leftList, std::list<unsigned int>& rightList ) {

	std::list<unsigned int>::iterator leftIt = leftList.begin();
	std::list<unsigned int>::iterator rightIt = rightList.begin();

	while (leftIt != leftList.end() && rightIt != rightList.end()) {
		if (*leftIt < *rightIt) {
			result.push_back(*leftIt);
			++leftIt;
		} else {
			result.push_back(*rightIt);
			++rightIt;
		}
	}

	result.insert(result.end(), leftIt, leftList.end());
	result.insert(result.end(), rightIt, rightList.end());
}

std::deque<unsigned int>	PmergeMe::getDeque( void ) const {
	return (this->_deque);
}

std::list<unsigned int>	PmergeMe::getList ( void ) const {
	return (this->_list);
}

size_t						PmergeMe::getSize( void ) const {
	return (this->_size);
}

PmergeMe&	PmergeMe::operator=( const PmergeMe& ref ) {
	if (this != &ref) {
		this->_deque = (ref.getDeque());
		this->_list = (ref.getList());
		this->_size = (ref.getSize());
	}
	return *this;
}

PmergeMe::PmergeMe( PmergeMe& ref ) {
	this->_deque = (ref.getDeque());
	this->_list = (ref.getList());
	this->_size = (ref.getSize());
}
