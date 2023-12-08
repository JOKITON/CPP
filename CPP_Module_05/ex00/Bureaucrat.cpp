/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:03:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/08 22:06:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(50) {
	std::cout << "[Bureaucrat] Default 'constructor' has been called." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& p ) : _name(p._name), _grade(p._grade) {
	std::cout << "[Bureaucrat] Copy Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;

}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name) {
	int temp = grade;
	
	// Checks if the grade can be out of bounds & is adjusted accordingly
	temp = (grade < 1) ? 0 : grade;
	temp = (grade > 150) ? 151 : temp;
	switch( temp ) {
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

void	Bureaucrat::incrementGrade( int val ) {
	int	temp;
	
	// Checks if the given value is negative & changes it to positive
	val *= (val < 0) ? -1 : 1;
	// Checks if the grade can be out of bounds & is adjusted to '-1'
	temp = ((_grade - val) < 1) ? -1 : _grade;
	switch(temp) {
		case -1:
			throw (Bureaucrat::GradeTooHighException());
			break ;
		default:
			this->_grade -= val;
			std::cout << "[Bureaucrat] 'incrementGrade(" << val << ")' for '" << this->_name << "' has been called.  Current grade : [" << this->_grade << "]." << std::endl;
	}
}

void	Bureaucrat::decrementGrade( int val ) {
	int	temp;
	
	// Checks if the given value is negative & changes it to positive
	val *= (val < 0) ? -1 : 1;
	// Checks if the grade can be out of bounds & is adjusted to '-1'
	temp = ((_grade + val) > 150) ? -1 : _grade;
	switch(temp) {
		case -1:
			throw (Bureaucrat::GradeTooLowException());
			break ;
		default:
			this->_grade += val;
			std::cout << "[Bureaucrat] 'decrementGrade(" << val << ")' for '" << this->_name << "' has been called.   Current grade : [" << this->_grade << "]." << std::endl;
	}
}
