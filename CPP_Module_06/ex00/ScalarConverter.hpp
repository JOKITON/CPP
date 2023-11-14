/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:06:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/14 12:43:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>

#define INF_NAN -1
#define IS_CHAR 1
#define IS_INT 2
#define IS_FLOAT 3
#define IS_DOUBLE 4

bool 	hasOnlyDigits( const std::string& str );
bool 	hasFloatFormat( const std::string& str);
bool 	hasDoubleFormat( const std::string& str);

int		intItoa( const char *str );
float	floatItoa( const char *str );
double	doubleItoa(const char *str);

class ScalarConverter {
	private:
		const std::string 	_input;
		int					_type;
		char				_char;
		int					_int;
		float				_float;
		double				_double;
	public:
		ScalarConverter( const std::string & input);

		int		checkInput( void );
		void	printOutput( void)  const;
		void	saveInput( void );
	
		static void	convert( const std::string& input );

		void					formatChar( void );
		void					formatInt( void );
		void					formatFloat( void );
		void					formatDouble( void );

		const std::string		getInput( void );
		int						getType( void );
		char					getChar( void );
		int						getInteger( void );
		float					getFloat( void );
		double					getDouble( void );

		const char *what( void ) const throw();
};


#endif
