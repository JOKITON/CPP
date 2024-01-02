/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:44:32 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/02 21:38:58 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) : _size(0), _deque(), _list() {
	// _array(NULL);
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


	printDeque(BEFORE);
	std::chrono::_V2::system_clock::time_point timeStart = std::chrono::high_resolution_clock::now();
	std::sort(_deque.begin(), _deque.end());
	std::chrono::_V2::system_clock::time_point timeEnd = (std::chrono::high_resolution_clock::now());
	std::chrono::microseconds timeDuration = std::chrono::duration_cast<std::chrono::microseconds>(timeEnd - timeStart);
	printDeque(AFTER);
	std::cout << "Time to process a range of " << _size << " elements with std::[deque] : " << timeDuration.count() << " microseconds"<< std::endl;

	printList(BEFORE);
	timeStart = std::chrono::high_resolution_clock::now();
	_list.sort();
	timeEnd = (std::chrono::high_resolution_clock::now());
	timeDuration = std::chrono::duration_cast<std::chrono::microseconds>(timeEnd - timeStart);
	printList(AFTER);
	std::cout << "Time to process a range of 5 elements with std::[list] : " << timeDuration.count() << " microseconds" << std::endl;

	// printTime();
}
