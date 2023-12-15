/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:26 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 14:43:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define END "\033[0m"
#define BLACK "\033[4;30m"
#define RED "\033[1;31m"

#define BCYAN "\033[46m"
#define BBLACK "\033[47m"

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
	
		void	incrementGrade( unsigned int val );
		void	decrementGrade( unsigned int val );
		
		void    signForm( Form& p ) const;

};

#endif
