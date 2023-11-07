/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:19:57 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/07 12:39:21 by jaizpuru         ###   ########.fr       */
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
		/* Exceptions when grade is too low/high */
		void GradeTooLowException( int errorGrade );
		void GradeTooHighException( int errorGrade );

	public:
		/* Canonical Form */
		Form( void );
		~Form( void );
		Form(const Form& p);
		Form& operator=( const Form& p );
		/* Argument Constructor */
		Form( const std::string name, bool signed_, const int gradeSign, const int gradeExec );
		/* Getters */
		const	std::string& getName( void ) const;
		bool	getStatus( void ) const;
		int		getGradeSign( void ) const;
		int		getGradeExec( void ) const;
		/* Special functions */
		void	beSigned( const Bureaucrat& p );
		void	signForm( const Bureaucrat& p );
		friend std::ostream& operator<<( std::ostream& out, Form& p );
};



#endif