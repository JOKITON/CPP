/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:03:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/06 18:15:08 by jaizpuru         ###   ########.fr       */
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
	
	temp = (grade < 1) ? 0 : grade;
	temp = (grade > 150) ? 151 : temp;
	try {
		switch( temp ) {
			case 0:
				throw temp;
			case 151:
				throw temp;
			default :
				this->_grade = grade;
				std::cout << "[Bureaucrat] Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;
		}
	}
	catch ( int wrongGrade ) {
		switch ( wrongGrade ) {
			case 0:
				GradeTooHighException( grade );
				break ;
			case 151:
				GradeTooLowException( grade );
				break ;
		}
		std::cout << " %> */* All Bureaucrat grades that are off-limits will be set to '50'. */*" << std::endl;
		this->_grade = 50;
	}
	
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "[Bureaucrat] Default 'destructor' has been called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat& p) {
	std::cout << "[Bureaucrat] Assigment Operator for '" << this->_name << "' using '"<< p.getName() << "' has been called." << std::endl;
	if (this != &p) {
		this->_grade = p.getGrade();
		this->_name = (p.getName());

		/* std::cout << "Memory Adress of _name : " << &_name << std::endl;
		std::cout << "Memory Adress of p.getName() : " << &p.getName() << std::endl; */
	}

	return *this;
}

std::ostream& operator<<( std::ostream& out, Bureaucrat& p) {
	out << "[Bureaucrat] " << p.getName() << " , bureaucrat grade " << p.getGrade() << ".\n";

	return out;
}


std::string const & Bureaucrat::getName( void ) const {
	return this->_name;
}

int	Bureaucrat::getGrade( void ) {
	return _grade;
}

void	Bureaucrat::incrementGrade( int val ) {
	int	temp;
	
	val *= (val < 0) ? -1 : 1; // negative checker
	temp = ((_grade - val) < 1) ? -1 : _grade; // out of bounds checker
	try {
		switch(temp) {
			case -1:
				throw (_grade - val);
			default:
				this->_grade -= val;
				std::cout << "[Bureaucrat] 'incrementGrade()' for '" << this->_name << "' has been called.  Current grade : [" << this->_grade << "]." << std::endl;
		}
	}
	catch( int res ) {
		GradeTooHighException( res );
		return ;
	}
}

void	Bureaucrat::decrementGrade( int val ) {
	int	temp;
	
	val *= (val < 0) ? -1 : 1; // negative checker
	temp = ((_grade + val) > 150) ? -1 : _grade; // out of bounds checker
	try {
		switch(temp) {
			case -1:
				throw (_grade + val);
			default:
				this->_grade += val;
				std::cout << "[Bureaucrat] 'decrementGrade()' for '" << this->_name << "' has been called.   Current grade : [" << this->_grade << "]." << std::endl;
		}
	}
	catch( int res ) {
		GradeTooLowException( res );
		return ;
	}
}

void	Bureaucrat::GradeTooHighException( int num ) {
	std::cout << "[Bureaucrat] error: [" << num << "] is too high for '" << this->_name << "'! 'GradeTooHighException' " << std::endl;
}

void	Bureaucrat::GradeTooLowException( int num ) {
	std::cout << "[Bureaucrat] error: [" << num << "] is too low for '" << this->_name << "'! 'GradeTooLowException' " << std::endl;
}
