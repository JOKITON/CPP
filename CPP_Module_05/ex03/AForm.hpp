/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/11 17:24:19 by jaizpuru         ###   ########.fr       */
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
		const int _gradeSign;
		const int _gradeExec;

	public:
		/* Exceptions when grade is too low/high */
		void GradeTooLowException( const int errorGrade ) const;
		void GradeTooHighException( const int errorGrade ) const;
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
		void	beSigned( const Bureaucrat& p );
		friend std::ostream& operator<<( std::ostream& out, AForm& p );
		/* Pure Virtual function to make AForm abstract */
		virtual void execute( Bureaucrat const & executor ) const = 0;
};

#endif
