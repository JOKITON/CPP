/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:49:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:13:46 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "_default", FALSE, 72, 45 ) {
	std::cout << "[RobotomyRequestForm] '" << "_default" << "' has been constructed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) : AForm(target, FALSE, 72, 45) {
	std::cout << "[RobotomyRequestForm] '" << target << "' has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & p ) : AForm( p.getName(), p.getStatus(), 72, 45 ) {
	std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been constructed from '" << p.getName() << "'." << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& p ) {
	std::cout << "(warning: name, execution & sign grades cannot be coppied due to 'const' prefix)" << std::endl;
	if (this != &p) {
		this->setSign(p.getStatus());
	}
	std::cout << "[RobotomyRequestForm] A copy of '" << this->getName() << "' has been assigned by '" << p.getName() << "'." << std::endl;
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
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
			throw (AForm::GradeTooLowException());
			break ;
		case 1:
			std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been robotomized succesfully 50% of the time..." << std::endl;
			break ;

	}
}
