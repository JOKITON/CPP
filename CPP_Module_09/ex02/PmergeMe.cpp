/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:44:32 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/04 19:15:40 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) : _size(0), _deque(), _list() {
	/* std::cout << "[PmergeMe] Default constructor has been called" << std::endl; */
}

PmergeMe::~PmergeMe( void ) {
	/* std::cout << "[PmergeMe] Default destructor has been called." << std::endl; */
}

std::deque<unsigned int>	PmergeMe::getDeque( void ) const {
	return (_deque);
}

std::list<unsigned int>	PmergeMe::getList ( void ) const {
	return (_list);
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

void	PmergeMe::insertContainers( char	**ar ) {

	for (size_t i = 0; i < _size; i++) {
		_deque.push_back(atoi(ar[i + 1]));
		_list.push_back(atoi(ar[i + 1]));
	}
}

void	PmergeMe::sort( char	**args ) {
	_size = getArSize( args );
	
	insertContainers( args );

/* 	std::string	containerType;
	while (containerType == "") {
		std::cout << "What container do you want to use?\n	[1] std::deque\n	[2] std::list" << std::endl;
		std::getline(std::cin, containerType);
		if (containerType.compare("1")) {
			printDeque(BEFORE);
			break ;
		}
		else if (containerType.compare("2")) {
			printList(BEFORE);
			break ;
		}
		else
			containerType = "";
	} */

	printDeque(BEFORE);
	struct	timeval	timeStart, timeEnd;
	gettimeofday(&timeStart, 0);
	_flag = DEQUE;
	std::sort(_deque.begin(), _deque.end());
	gettimeofday(&timeEnd, 0);
	long microseconds = timeEnd.tv_usec - timeStart.tv_usec;
	printDeque(AFTER);
	std::cout << "Time to process a range of " << _size << " elements with std::[deque] : " << microseconds << " microseconds"<< std::endl;

	// printList(BEFORE);
	gettimeofday(&timeStart, 0);
	_flag = LIST;
	_list.sort();
	gettimeofday(&timeEnd, 0);
	microseconds = timeEnd.tv_usec - timeStart.tv_usec;
	// printList(AFTER);
	std::cout << "Time to process a range of 5 elements with std::[list] : " << microseconds << " microseconds" << std::endl;
	// system("leaks Pmerge");
}

void PmergeMe::merge( void ) {
    if ( _flag == DEQUE ) {
		std::deque<unsigned int> leftDeque(_deque.begin(), _deque.begin() + _deque.size() / 2);
		std::deque<unsigned int> rightDeque(_deque.begin() + _deque.size() / 2, _deque.end());
		
		std::deque<unsigned int>::iterator leftIt = leftDeque.begin();
		std::deque<unsigned int>::iterator rightIt = rightDeque.begin();

		while (leftIt != leftDeque.end() && rightIt != rightDeque.end()) {
			if (*leftIt < *rightIt) {
				_deque.push_back(*leftIt);
				++leftIt;
			} else {
				_deque.push_back(*rightIt);
				++rightIt;
			}
		}

		_deque.insert(_deque.end(), leftIt, leftDeque.end());
		_deque.insert(_deque.end(), rightIt, rightDeque.end());
	}
	else if ( _flag == LIST ) {
		std::list<unsigned int> leftList(_list.begin(), _list.begin() + _list.size() / 2);
		std::list<unsigned int> rightList(_list.begin() + _list.size() / 2, _list.end());
		
		std::list<unsigned int>::iterator leftIt = leftList.begin();
		std::list<unsigned int>::iterator rightIt = rightList.begin();

		while (leftIt != leftList.end() && rightIt != rightList.end()) {
			if (*leftIt < *rightIt) {
				_deque.push_back(*leftIt);
				++leftIt;
			} else {
				_deque.push_back(*rightIt);
				++rightIt;
			}
		}

		_list.insert(_list.end(), leftIt, _list.end());
		_list.insert(_list.end(), rightIt, _list.end());
	}
}

template <typename R>
void PmergeMe::insertionSort(R& container, unsigned int size) {
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

void PmergeMe::mergeInsertSort( void ) {
    
	if ( _flag == DEQUE ) {
		if (_deque.size() <= 16)
			insertionSort(_deque, _deque.size());
		else {
			std::deque<unsigned int> leftDeque(_deque.begin(), _deque.begin() + _deque.size() / 2);
			std::deque<unsigned int> rightDeque(_deque.begin() + _deque.size() / 2, _deque.end());

			mergeInsertSort(leftDeque);
			mergeInsertSort(rightDeque);

			_deque.clear();
			merge();
		}
	}
	else if ( _flag == LIST ) {
		if (_list.size() <= 16)
			insertionSort(_list, _list.size());
		else {
			std::list<unsigned int> leftList(_list.begin(), _list.begin() + _list.size() / 2);
			std::list<unsigned int> rightList(_list.begin() + _list.size() / 2, _list.end());

			mergeInsertSort(leftList);
			mergeInsertSort(rightList);

			_list.clear();
			merge();
		}
	}
}
