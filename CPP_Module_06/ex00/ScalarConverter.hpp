/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:06:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/12 16:01:20 by jaizpuru         ###   ########.fr       */
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

class ScalarConverter {
	private:

	public:
		void	convert( const std::string& input );
};


#endif
