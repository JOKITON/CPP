/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:06:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/16 15:56:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
 /* Using libraries related to C for */
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <iomanip>

#define INF_NAN -1
#define IS_CHAR 1
#define IS_INT 2
#define IS_FLOAT 3
#define IS_DOUBLE 4

class ScalarConverter {
	private:
		const std::string 	_input;
		int					_type;
		char				_char;
		int					_int;
		float				_float;
		double				_double;
	public:
		/* Canonical form */
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( const ScalarConverter& p);
		ScalarConverter& operator=( const ScalarConverter& p);
		ScalarConverter( const std::string & input);

		/* Convert related */
		int		checkInput( void );
		void	printOutput( void)  const;
		void	saveInput( void );
	
		static void	convert( const std::string& input );

		void					formatChar( void );
		void					formatInt( void );
		void					formatFloat( void );
		void					formatDouble( void );

		/* Getters */
		const std::string		getInput( void ) const;
		int						getType( void ) const;
		char					getChar( void ) const;
		int						getInteger( void ) const;
		float					getFloat( void ) const;
		double					getDouble( void ) const;

		/* Exception, non-usable */
		const char *what( void ) const throw();

		/* Utility functions */
		static bool hasOnlyDigits(const std::string& str);
		static bool hasFloatFormat(const std::string& str);
		static bool hasDoubleFormat(const std::string& str);

};


#endif
