/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:06:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/13 16:28:59 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>

bool 	hasOnlyDigits( const std::string& str );
bool 	hasOnlyCharacters( const std::string& str );
bool 	checkChar( const std::string& input );
int		intItoa( const char *str );
bool 	hasFloatFormat( const std::string& str);
float	floatItoa( const char *str );
double	doubleItoa(const char *str);

class ScalarConverter {
	private:

	public:
		void	convert( const std::string& input );
};


#endif
