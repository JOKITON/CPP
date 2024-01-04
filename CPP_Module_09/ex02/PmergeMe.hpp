/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:20:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/04 19:15:27 by jaizpuru         ###   ########.fr       */
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
/* 					_timeList;
					_timeForwardList; */
		short int		_flag;
		size_t			_size;
		std::deque<unsigned int>	_deque;
		std::list<unsigned int>		_list;
	public:
		PmergeMe( void );
		~PmergeMe( void );

		std::deque<unsigned int>	getDeque( void ) const;
		std::list<unsigned int>		getList( void ) const;

		void			insertContainers( char	**ar );
		void			printDeque( char	flag );
		void			printList( char flag);
		void			printTime( void ) const;
		size_t			getArSize( char **ar );
		
		void			sort( char **args );
		void			mergeInsertSort( void );
		void			insertionSort(R& container, unsigned int size);
		void			merge( void );
};

#endif
