/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:54:08 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/08 19:37:33 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "_default", FALSE, 100, 75 ) {
	std::cout << "[ShrubberyCreationForm] '" << "_default" << "' has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( Form & p ) : Form( p.getName(), p.getStatus(), 145, 137) {
	std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been constructed." << std::endl;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) {
	int check1;

	check1 = ( this->getGradeExec() >= executor.getGrade()) ? 1 : 0;
	switch (check1) {
		case 1:
			check1 = (this->getStatus()) ? 1 : -1;
	}
	switch ( check1 ) {
		case -1:
			std::cerr << "[ShrubberyCreationForm] error: '" << this->getName() << "' could not be executed due to its lacking signature..." << std::endl;
			break ;
		case 0:
			this->GradeTooLowException( executor.getGrade() );
			break ;
		case 1:
			std::cout << "[ShrubberyCreationForm] '" << this->getName() << "' has been pardoned by Zaphod Beeblebrox..." << std::endl;
			break ;

	}
}