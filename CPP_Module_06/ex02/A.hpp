/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:52:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 15:13:49 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

#define END "\033[0m"
#define BLACK "\033[4;30m"
#define RED "\033[1;31m"

#define BCYAN "\033[46m"
#define BBLACK "\033[47m"

class A : public Base
{
	private:

	public:
		A( void ) {
			std::cout << "[A] Default constructor has been called." << std::endl;
		}
		~A( void ) {
			std::cout << "[A] Default destructor has been called." << std::endl;
		}

};

#endif
