/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:48:32 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/10 12:33:24 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private:

	public:
		Intern( void );
		~Intern( void );

		Intern( const Intern& p );
		Intern&	operator=( const Intern& p );

		AForm* makeForm( const std::string & formName, const std::string& formTarget ) const;
};

#endif
