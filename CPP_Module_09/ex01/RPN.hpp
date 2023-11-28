/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:58 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/28 22:02:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>

#define TRUE 0
#define FALSE 1

#define CASE_SPACE 101
#define CASE_DIGIT 102
#define CASE_SIGN 103

class RPN
{
	private:
		std::string		_str;
		std::vector<float>	_vector;
		size_t			_size;

		void	handleSigns( char ch );
	public:
		RPN( void );
		RPN( std::string& str );
		~RPN( void );
};

#endif
