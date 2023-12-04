/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:44:32 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/04 23:33:05 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) : _size(0), _list(NULL), _set(NULL) {
	/* std::cout << "[PmergeMe] Default constructor has been called" << std::endl; */
}

PmergeMe::~PmergeMe( void ) {
	delete []_list;
	delete []_set;
	/* std::cout << "[PmergeMe] Default destructor has been called." << std::endl; */
}

std::list<unsigned int>*	PmergeMe::getList( void ) const {
	return (_list);
}

std::set<unsigned int>*	PmergeMe::getForwardList( void ) const {
	return (_set);
}

size_t	PmergeMe::getArSize( char **ar ) {
	size_t	i;
	
	for (i = 1; ar[i]; i++)
		;
	return (i - 1);
}

void	PmergeMe::printList( char	flag ) const {

	std::list<unsigned int>::iterator	ptList;
	switch (flag) {
		case BEFORE:
			std::cout << "Before: ";
			break ;
		case AFTER:
			std::cout << "After: ";
			break ;
	}
	for (ptList = (_list->begin()); ptList != _list->end(); ptList++) {
		std::cout << *ptList << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printSet( char	flag ) const {

	std::set<unsigned int>::iterator	ptSet;
	switch (flag) {
		case BEFORE:
			std::cout << "Before: ";
			break ;
		case AFTER:
			std::cout << "After: ";
			break ;
	}
	for (ptSet = (_set->begin()); ptSet != _set->end(); ptSet++) {
		std::cout << *ptSet << " ";
	}
	std::cout << std::endl;
}
	

void	PmergeMe::printTime( void ) const{
	// std::cout << "Time to process a range of " << _size << " elements with std::list : " << _timeList << " us" << std::endl;

	// std::cout << "Time to process a range of " << _size << " elements with std::forward_list : " << _timeForwardList << " us" << std::endl;
}

void	PmergeMe::insertList( char	**ar ) const {

	for (size_t i = 0; i < _size; i++) {
		_list->push_back(atoi(ar[i + 1]));
	}
	for (size_t i = 0; i < _size; i++) {
		_set->insert(atoi(ar[i + 1]));
	}
}

void	PmergeMe::sort( char	**args ) {
	_size = getArSize( args );
	
	_list = new std::list<unsigned int>[_size];
	_set = new std::set<unsigned int>[_size];

	insertList( args );

	printList(BEFORE);
	printSet(BEFORE);

	_list->sort();

	_set->size();

	printList(AFTER);
	printSet(AFTER);
	printTime();
}
