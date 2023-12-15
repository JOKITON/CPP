/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:03:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 15:20:55 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("defaultBureaucrat"), _grade(50) {
	std::cout << "[Bureaucrat] Default 'constructor' has been called." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& p ) : _name(p._name), _grade(p._grade) {
	std::cout << "[Bureaucrat] Copy Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;

}

Bureaucrat::Bureaucrat( const std::string name, unsigned int grade ) : _name(name) {
	unsigned int temp1 = grade;
	
	// Checks if the grade can be out of bounds & is adjusted accordingly
	temp1 = (grade < 1) ? 0 : grade;
	temp1 = (grade > 150) ? 151 : temp1;
	switch( temp1 ) {
		case 0:
			throw (Bureaucrat::GradeTooHighException());
			break ;
		case 151:
			throw (Bureaucrat::GradeTooLowException());
			break ;
		default :
			this->_grade = grade;
			std::cout << "[Bureaucrat] Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;
	}
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "[Bureaucrat] Default 'destructor' has been called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& p) {
	std::cout << "[Bureaucrat] Assigment Operator for '" << this->_name << "' using '"<< p.getName() << "' has been called." << std::endl;
	std::cout << "(warning: name cannot be coppied due to 'const' prefix)" << std::endl;

	if (this != &p) {
		this->_grade = p.getGrade();
	}

	return *this;
}

std::ostream& operator<<( std::ostream& out, Bureaucrat& p) {
	out << p.getName() << " , bureaucrat grade " << p.getGrade() << ".\n";

	return out;
}


std::string const & Bureaucrat::getName( void ) const {
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const{
	return _grade;
}

void	Bureaucrat::incrementGrade( unsigned int val ) {
	int	temp1;

	// Checks if the grade can be out of bounds & is adjusted to '-1'
	temp1 = ((_grade - val) < 1) ? -1 : _grade;
	switch (temp1) {
		case -1:
			throw (Bureaucrat::GradeTooHighException());
			break ;
		default:
			this->_grade -= val;
			std::cout << "[Bureaucrat] 'incrementGrade(" << val << ")' for '" << this->_name << "' has been called.  Current grade : [" << this->_grade << "]." << std::endl;
	}
}

void	Bureaucrat::decrementGrade( unsigned int val ) {
	int	temp1;
	
	// Checks if the grade can be out of bounds & is adjusted to '-1'
	temp1 = ((_grade + val) > 150) ? -1 : _grade;
	switch(temp1) {
		case -1:
			throw (Bureaucrat::GradeTooLowException());
			break ;
		default:
			this->_grade += val;
			std::cout << "[Bureaucrat] 'decrementGrade(" << val << ")' for '" << this->_name << "' has been called.   Current grade : [" << this->_grade << "]." << std::endl;
	}
}
