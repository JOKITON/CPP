/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:32:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/08 19:37:15 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "_default", FALSE, 25, 5 ) {
	std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( Form& p ) : Form(p.getName() , p.getStatus(), 25, 5 ) {
	std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been constructed." << std::endl;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) {
	int check1;

	check1 = ( this->getGradeExec() >= executor.getGrade()) ? 1 : 0;
	switch (check1) {
		case 1:
			check1 = (this->getStatus()) ? 1 : -1;
	}
	switch ( check1 ) {
		case -1:
			std::cerr << "[PresidentialPardonForm] error: '" << this->getName() << "' could not be executed due to its lacking signature..." << std::endl;
			break ;
		case 0:
			this->GradeTooLowException( executor.getGrade() );
			break ;
		case 1:
			std::cout << "[PresidentialPardonForm] '" << this->getName() << "' has been pardoned by Zaphod Beeblebrox..." << std::endl;
			break ;

	}
}
