/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:53:52 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 12:58:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base
{
	private:

	public:
		C( void ) {
			std::cout << "[C] Default constructor has been called." << std::endl;
		}
		~C( void ) {
			std::cout << "[C] Default destructor has been called." << std::endl;
		}

};

#endif
