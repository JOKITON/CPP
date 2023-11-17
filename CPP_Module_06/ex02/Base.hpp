/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:50:38 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 12:58:03 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	private:
		
	public:
		virtual ~Base( void ) {
			std::cout << "[Base] Default destructor has been called." << std::endl;
		};
};

#endif
