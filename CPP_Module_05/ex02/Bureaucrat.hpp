/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:26 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/09 09:35:35 by jaizpuru         ###   ########.fr       */
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
#include <fstream>
#include <ostream>

class AForm; // to avoid looping #include

class Bureaucrat {
	private:
		const std::string 	_name;
		int			_grade;
		
	public:
		/* Constructors */
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade);
		Bureaucrat( const Bureaucrat& p );
		virtual ~Bureaucrat( void );
		 /* Overload operators */
		Bureaucrat& operator=( Bureaucrat& p);
		friend std::ostream& operator<<( std::ostream& out, Bureaucrat& p);
		/* Getters */
		std::string const & getName( void ) const;
		int getGrade( void ) const;
		/* Increment/Decrement Grades */
		void	incrementGrade( int val );
		void	decrementGrade( int val );
		/* Form object related ex01, ex02 */
		void    signForm( AForm& p ) const ;
		void	executeForm( AForm const & form );
		/* Exceptions */
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: Bureaucrat: the given GRADE was too LOW!\n");
				}
		};
		class	GradeTooHighException : public std::exception {
			public:
				const char *what( void ) const throw() {
					return ("\nerror: exception: Bureaucrat: the given GRADE was too HIGH\n");
				}
		};
		class	NonSignedFormException : public std::exception {
			public:
				const char *what( void ) const throw() {
					return ("\nerror: exception: Bureaucrat: the given FORM was NOT SIGNED\n");
				}
		};

};

#endif
