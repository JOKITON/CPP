/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:03:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 12:36:28 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(50) {
	std::cout << "[Bureaucrat] Default 'constructor' has been called." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& p ) : _name(p._name), _grade(p._grade) {
	std::cout << "[Bureaucrat] Copy Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;

}

Bureaucrat::Bureaucrat( const std::string name, unsigned int grade ) : _name(name) {
	unsigned int temp = grade;
	
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

Bureaucrat& Bureaucrat::operator=( Bureaucrat& p) {
	std::cout << "[Bureaucrat] Assigment Operator for '" << this->_name << "' using '"<< p.getName() << "' has been called." << std::endl;
	std::cout << "(warning: name cannot be coppied due to 'const' prefix)" << std::endl;
	if (this != &p) {
		this->_grade = p.getGrade();
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

unsigned int	Bureaucrat::getGrade( void ) const{
	return _grade;
}

void	Bureaucrat::incrementGrade( unsigned int val ) {
	
	if ( (_grade - val) < 1 ) {
		throw (Bureaucrat::GradeTooHighException());
	}
	this->_grade -= val;
	std::cout << "[Bureaucrat] 'incrementGrade(" << val << ")' for '" << this->_name << "' has been called.  Current grade : [" << this->_grade << "]." << std::endl;
}

void	Bureaucrat::decrementGrade( unsigned int val ) {
	
	if ( (_grade + val) > 150 ) {
		throw (Bureaucrat::GradeTooLowException());
	}
	this->_grade += val;
	std::cout << "[Bureaucrat] 'decrementGrade(" << val << ")' for '" << this->_name << "' has been called.   Current grade : [" << this->_grade << "]." << std::endl;
}

void    Bureaucrat::signForm( AForm& p ) const {
    int checkGrade;

    checkGrade = (_grade <= p.getGradeSign()) ? 1 : 0;
    switch (checkGrade)
    {
        case 0:
            std::cout << _name << " couldn’t sign " << p.getName() << " because its grade is too low!" << std::endl;
            break;
        case 1:
			p.beSigned(*this);
            std::cout << _name << " signed " << p.getName() << std::endl;
            break ;
    }
}

/* ex02 */

void	Bureaucrat::executeForm( AForm const & form ) {
	int temp1;

	temp1 = (this->_grade <= form.getGradeExec()) ? 1 : 0;
	switch ( temp1 ) {
		case 1:
			temp1 = (form.getStatus()) ? 1 : -1;
	}
	switch ( temp1 )
	{
		case -1:
			std::cerr << "error: Bureaucrat: the given Form is not signed!" << std::endl;
			break ;
		case 1:
			std::cout << _name << " executed " << form.getName() << std::endl; // if evaluator wants to have this msg
			form.execute( *this );
			break;
		case 0:
			std::cerr << "error: Bureaucrat: the Bureaucrat's grade is too low!" << std::endl;
			break ;
	}
}
