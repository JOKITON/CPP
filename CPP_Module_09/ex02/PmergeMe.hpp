/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:20:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/04 14:56:04 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#define BEFORE 101
#define AFTER 102

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
};

#endif
