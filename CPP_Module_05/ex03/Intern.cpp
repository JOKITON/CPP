/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:50:51 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:37:33 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "[Intern] Default constructor has been called." << std::endl;
}

Intern::~Intern( void ) {
	std::cout << "[Intern] Default destructor has been called." << std::endl;
}

Intern::Intern( const Intern& p ) {
	(void)p;
	std::cout << "*warning: nothing to copy inside 'Intern'!" << std::endl;
	std::cout << "[Intern] Copy constructor has been called." << std::endl;
}

Intern&	Intern::operator=( const Intern& p ) {
	if (this != &p ) {
		std::cout << "*warning: nothing to copy inside 'Intern'!" << std::endl;
	}
	std::cout << "[Intern] Assignment Operator Overload has been called." << std::endl;
	return *this;
}

AForm*	Intern::makeForm( const std::string & formName, const std::string& formTarget ) const {
	AForm* ret;

	std::string arrayOfPointers[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int	it = -1;

	for (int i = 0; i < 3; i++) {
		if (formName == arrayOfPointers[i]) {
			it = i;
			break ; }
	}

	switch (it) {
		case 0:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			ret = new RobotomyRequestForm(formTarget);
			break ;
		case 1:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			ret = new ShrubberyCreationForm(formTarget);
			break ;
		case 2:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			ret = new PresidentialPardonForm(formTarget);
			break ;
		case -1:
			std::cerr << "error: '" << formName << "' is not an existant concrete class!" << std::endl;
			return NULL;
	}
	
	/* int		formDigit = 0;
	
	formDigit = (formName == "robotomy request") ? 1 : 0;
	formDigit = (formName == "shrubbery creation") ? 2 : formDigit;
	formDigit = (formName == "presidential pardon") ? 3 : formDigit;

	switch (formDigit) {
		case 1:
			ret = new RobotomyRequestForm(formTarget);
			break ;
		case 2:
			ret = new ShrubberyCreationForm(formTarget);
			break ;
		case 3:
			ret = new PresidentialPardonForm(formTarget);
			break ;
		case 0:
			std::cerr << "[Intern] error: '" << formName << "' is not an existant concrete class!" << std::endl;
			return NULL;

	} */
	// std::cout << "[Intern] Intern creates '" << formTarget << "' from concrete class [" << formName << "]" << std::endl;

	return ret;
}
