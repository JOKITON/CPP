/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:49:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/08 21:06:33 by jaizpuru         ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm & p ) : AForm( p.getName(), p.getStatus(), 72, 45 ) {
	std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been constructed." << std::endl;
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
