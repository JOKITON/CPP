/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:26 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/10 11:26:16 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define END "\033[0m"
#define BLACK "\e[4;30m"
#define RED "\e[1;31m"

#define BCYAN "\e[46m"
#define BBLACK "\e[47m"

#include <iostream>
#include <sstream>
class Form; // to avoid looping #include

class Bureaucrat {
	private:
		const std::string 	_name;
		int			_grade;
		
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: Bureaucrat: the given grade was too low!\n");
				}
		};
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: Bureaucrat: the given grade was too high!\n");
				}
		};

	public:
		/* Canonical Form */
		Bureaucrat( void );
		virtual ~Bureaucrat( void );
		Bureaucrat( const Bureaucrat& p );
		Bureaucrat& operator=( const Bureaucrat& p);
		
		Bureaucrat( const std::string name, int grade);
		friend std::ostream& operator<<( std::ostream& out, Bureaucrat& p);
		
		/* Getters */
		std::string const & getName( void ) const;
		int getGrade( void ) const;
	
		void	incrementGrade( int val );
		void	decrementGrade( int val );
		
		void    signForm( Form& p ) const;

};

#endif