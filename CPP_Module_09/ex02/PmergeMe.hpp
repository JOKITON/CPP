/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:20:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/04 23:32:33 by jaizpuru         ###   ########.fr       */
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
#include <list>
#include <set>
/* time */


class PmergeMe
{
	private:
/* 					_timeList;
					_timeForwardList; */
		size_t			_size;
		std::list<unsigned int>	*_list;
		std::set<unsigned int>	*_set;
	public:
		PmergeMe( void );
		~PmergeMe( void );

		std::list<unsigned int>*	getList( void ) const;
		std::set<unsigned int>*	getForwardList( void ) const;

		void			insertList( char	**ar ) const;
		void			printList( char	flag ) const;
		void			printSet( char flag) const;
		void			printTime( void ) const;
		size_t			getArSize( char **ar );
		
		void			sort( char **args );
};

#endif
