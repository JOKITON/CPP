/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:41:54 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/12 18:01:52 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

#define END "\033[0m"
#define BLACK "\033[4;30m"
#define RED "\033[1;31m"

#define BCYAN "\033[46m"
#define BBLACK "\033[47m"

/* Information about stack : https://cplusplus.com/reference/stack/stack/ */
/*
stack, queue and priority_queue are implemented as container adaptors.
Container adaptors are not full container classes, but classes that provide
a specific interface RELAYING ON AN OBJECT OF ONE OF THE CONTAINER CLASSES
(such as deque or list) to handle the elements. The underlying container is
encapsulated in such a way that ITS ELEMENTS ARE ACCESSED BY THE MEMBERS OF 
THE CONTAINER ADAPTOR INDEPENDENTLY of the underlying container class used.
*/

template <typename T>

class	MutantStack : public std::stack<T> {
	public:
		typedef std::stack<T> stack; // Used to make the code more readable
		typedef typename stack::container_type container;
		typedef typename container::iterator iterator;
		/* Canonical form */
		MutantStack() : stack() {
			std::cout << "[MutantStack] Default constructor has been called." << std::endl;
		};
		~MutantStack() {
			std::cout << "[MutantStack] Default destructor has been called." << std::endl;
		};
		MutantStack( stack & p ) : stack(p) {
			std::cout << "[MutantStack] Copy constructor has been called." << std::endl;
		};
		MutantStack& operator=( const stack & p ) {
			std::cout << "[MutantStack] Assignment Operator has been called." << std::endl;
			static_cast<std::stack<T>&>(*this) = p;


			return *this;
		};

		std::stack<int>	getStack( void ) const {
			return *this;
		};

		/* iterators */
	
		iterator end(void) {
			return stack::c.end();
		}

		iterator begin(void) {
			return stack::c.begin();
		}

		int	operator[]( unsigned long int	pos ) {
			if (pos > stack::c.size())
				return -1;
			iterator it;
			iterator	end = stack::c.end();
			unsigned long int len = 0;
			for (it = stack::c.begin(); it != end; it++) {
				if (len == pos)
					break ;
				else
					len++;
			}
			return *it;
		}
};

#endif
