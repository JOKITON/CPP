/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 15:39:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#define TRUE 1
#define FALSE 0

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: Form: the given grade was too low!\n");
				}
		};
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char *what( void ) const throw() {
					return ("\nerror: exception: Form: the given grade was too high!\n");
				}
		};
	public:
		/* Canonical Form */
		Form( void );
		virtual ~Form( void );
		Form(const Form& p);
		Form& operator=( const Form& p );
		/* Argument Constructor */
		Form( const std::string name, bool signed_, const unsigned int gradeSign, const unsigned int gradeExec );
		/* Getters */
		const	std::string& getName( void ) const;
		bool	getStatus( void ) const;
		int		getGradeSign( void ) const;
		int		getGradeExec( void ) const;
		/* Special functions */
		void	beSigned( const Bureaucrat& p );
		friend std::ostream& operator<<( std::ostream& out, Form& p );
};

#endif
