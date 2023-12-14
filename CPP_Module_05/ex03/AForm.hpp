/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 12:43:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#define TRUE 1
#define FALSE 0

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string _name;
		bool _signed;
		const unsigned int _gradeSign;
		const unsigned int _gradeExec;

	public:
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: AForm: the given grade was too low!\n");
				}
		};
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: AForm: the given grade was too high!\n");
				}
		};
		class	NonSignedFormException : public std::exception {
			public:
				const char *what( void ) const throw() {
					return ("\nerror: exception: AForm: the given FORM was NOT SIGNED\n");
				}
		};
		/* Canonical Form */
		AForm( void );
		virtual ~AForm( void );
		AForm(const AForm& p);
		AForm& operator=( const AForm& p );
		/* Argument Constructor */
		AForm( const std::string name, bool signed_, const unsigned int gradeSign, const unsigned int gradeExec );
		/* Getters */
		const	std::string& getName( void ) const;
		bool	getStatus( void ) const;
		unsigned int		getGradeSign( void ) const;
		unsigned int		getGradeExec( void ) const;
		/* Special functions */
		virtual void	beSigned( const Bureaucrat& p );
		friend std::ostream& operator<<( std::ostream& out, AForm& p );
		/* Pure Virtual function to make AForm abstract */
		virtual void execute( Bureaucrat const & executor ) const = 0;
};

#endif
