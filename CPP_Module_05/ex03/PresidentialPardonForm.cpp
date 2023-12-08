/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:32:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/08 21:06:27 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm( "_default", FALSE, 25, 5 ) {
	std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been constructed." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) : AForm(target, FALSE, 25, 5) {
	std::cout << "[PresidentialPardonForm] '" << target << "' has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm& p ) : AForm(p.getName() , p.getStatus(), 25, 5 ) {
	std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been constructed." << std::endl;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	int check1;

	check1 = ( this->getGradeExec() >= executor.getGrade()) ? 1 : 0;
	switch (check1) {
		case 1:
			check1 = (this->getStatus()) ? 1 : -1;
	}
	switch ( check1 ) {
		case -1:
			throw (AForm::NonSignedFormException());
			break ;
		case 0:
			throw (AForm::GradeTooLowException()); // throw exception
			break ;
		case 1:
			std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been pardoned by Zaphod Beeblebrox..." << std::endl;
			break ;

	}
}
