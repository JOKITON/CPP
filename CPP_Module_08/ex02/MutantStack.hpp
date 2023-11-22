/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:41:54 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/22 17:12:00 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T> // we need to use a template as std::stack works with these type
/* If you need to check that it does : https://cplusplus.com/reference/stack/stack/ */

class	MutantStack : public std::stack<T> { // We inherit from std::stack using our template
	public:
		typedef std::stack<T> stack; // typedef created to make more readable the code
		/* Canonical form */
		MutantStack() : stack() {
			std::cout << "[MutantStack] Default constructor has been called." << std::endl;
		};
		~MutantStack() {
			std::cout << "[MutantStack] Default destructor has been called." << std::endl;
		};
		MutantStack( const stack & p ) : stack(p) {
			std::cout << "[MutantStack] Copy constructor has been called." << std::endl;
		};
		MutantStack& operator=( const stack & p ) {
			std::cout << "[MutantStack] Assignment Operator has been called." << std::endl;
			if (*this != p) {
				*this = p;
			}
			return *this;
		};

		std::stack<int>	getStack( void ) const {
			return *(this->_stack);
		};

		/* iterators */
	
};

#endif
