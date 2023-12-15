/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:06:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 17:40:32 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
 /* Using libraries related to C for */
#include <stdlib.h> // used for atof, const char*->double
#include <limits> // used to handle numeric limits
#include <iostream> // general use
#include <iomanip> // for setting decimal precision

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
		
		ScalarConverter( void );
		ScalarConverter( const std::string & input);

		class	NonAllowedFormat : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: Bureaucrat: the given GRADE was too LOW!\n");
				}
		};
	public:
		/* Canonical form */
		~ScalarConverter( void );
		ScalarConverter( const ScalarConverter& p);
		ScalarConverter& operator=( const ScalarConverter& p);

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

		/* Utility functions */
		static bool hasOnlyDigits(const std::string& str);
		static bool hasFloatFormat(const std::string& str);
		static bool hasDoubleFormat(const std::string& str);

};


#endif
