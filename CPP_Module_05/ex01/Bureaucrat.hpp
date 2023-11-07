/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:26 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/07 10:40:04 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define END "\033[0m"
#define WHITE "\e[4;30m"
#define BCYAN "\e[46m"

#include <iostream>
#include <sstream>

class Bureaucrat {
	private:
		std::string 	_name;
		int			_grade;
		
		void	GradeTooHighException( int errorGrade );
		void	GradeTooLowException( int errorGrade );
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade);
		Bureaucrat( const Bureaucrat& p );
		virtual ~Bureaucrat( void );

		Bureaucrat& operator=( Bureaucrat& p);
		friend std::ostream& operator<<( std::ostream& out, Bureaucrat& p);
		
		std::string const & getName( void ) const;
		int getGrade( void ) const;

		void	incrementGrade( int val );
		void	decrementGrade( int val );

};




#endif