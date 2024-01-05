/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:58 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/05 16:56:16 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>

#define TRUE 0
#define FALSE 1

#define SPACE ' '
#define DIGIT 102
#define SIGN 103

#define PLUS '+'
#define MINUS '-'
#define TIMES '*'
#define DIVISION '/'

class RPN
{
	private:
		std::vector<float>	_vector;

		void	handleSigns( char ch );
	public:
		RPN( void );
		~RPN( void );
		RPN( std::string& str );
		
		RPN( RPN& ref );
		RPN& operator=( const RPN& ref );
		std::vector<float>	cpyVector( void ) const;
};

#endif
