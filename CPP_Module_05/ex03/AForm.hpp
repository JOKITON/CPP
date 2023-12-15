/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 18:14:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#define TRUE 1
#define FALSE 0

#include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

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
		AForm( const std::string name, bool signed_, const int gradeSign, const int gradeExec );
		/* Getters */
		const	std::string& getName( void ) const;
		bool	getStatus( void ) const;
		int		getGradeSign( void ) const;
		int		getGradeExec( void ) const;
		/* Special functions */
		virtual void	beSigned( const Bureaucrat& p );
		/* Pure Virtual function to make AForm abstract */
		virtual void execute( Bureaucrat const & executor ) const = 0;
		/* for ex02 */
		void	setSign( bool	signStatus );
};

std::ostream& operator<<( std::ostream& out, AForm& p );

#endif
