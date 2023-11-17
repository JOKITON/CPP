/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:53:39 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 12:58:29 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
	private:

	public:
		B( void ) {
			std::cout << "[B] Default constructor has been called." << std::endl;
		}
		~B( void ) {
			std::cout << "[B] Default destructor has been called." << std::endl;
		}

};

#endif
