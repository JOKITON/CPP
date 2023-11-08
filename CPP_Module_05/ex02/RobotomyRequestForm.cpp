/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:49:41 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/08 19:37:25 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "_default", FALSE, 72, 45 ) {
	std::cout << "[RobotomyRequestForm] '" << "_default" << "' has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( Form & p ) : Form( p.getName(), p.getStatus(), 72, 45 ) {
	std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been constructed." << std::endl;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) {
	int check1;

	check1 = ( this->getGradeExec() >= executor.getGrade()) ? 1 : 0;
	switch (check1) {
		case 1:
			check1 = (this->getStatus()) ? 1 : -1;
	}
	switch ( check1 ) {
		case -1:
			std::cerr << "[RobotomyRequestForm] error: '" << this->getName() << "' could not be executed due to its lacking signature..." << std::endl;
			break ;
		case 0:
			GradeTooLowException( executor.getGrade() );
			break ;
		case 1:
			std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been pardoned by Zaphod Beeblebrox..." << std::endl;
			break ;

	}
}
