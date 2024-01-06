/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:20:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/06 13:51:27 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#define BEFORE 101
#define AFTER 102

#define DEQUE 201
#define LIST 202

/* general use*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
/* containers */
#include <deque>
#include <list>
/* time */
#include <sys/time.h>
// #include <chrono>


class PmergeMe
{
	private:
		size_t			_size;
		std::deque<unsigned int>	_deque;
		std::list<unsigned int>		_list;

	public:
		PmergeMe( void );
		~PmergeMe( void );

		size_t						getSize( void ) const;
		std::deque<unsigned int>	getDeque( void ) const;
		std::list<unsigned int>		getList( void ) const;

		bool			insertContainers( char	**ar );
		void			printDeque( char	flag );
		void			printList( char flag);
		size_t			getArSize( char **ar );
		
		void			sort( char **args );
		void			mergeInsertSortDeque( std::deque<unsigned int>& containerDeque );
		void			mergeInsertSortList( std::list<unsigned int>& containerList );
		void			insertionSortDeque(std::deque<unsigned int>& container, unsigned int size);
		void			insertionSortList(const std::list<unsigned int>& container);
		void			mergeDeque( std::deque<unsigned int>& result, std::deque<unsigned int>& leftDeque, std::deque<unsigned int>& rightDeque );
		void			mergeList( std::list<unsigned int>& result, std::list<unsigned int>& leftList, std::list<unsigned int>& rightList );


		PmergeMe&	operator=( const PmergeMe& ref );
		PmergeMe( const PmergeMe& ref );
};

#endif
