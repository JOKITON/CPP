/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:03:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/11 17:32:44 by jaizpuru         ###   ########.fr       */
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

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name) {
	int temp = grade;
	
	// Checks if the grade can be out of bounds & is adjusted accordingly
	temp = (grade < 1) ? 0 : grade;
	temp = (grade > 150) ? 151 : temp;
	switch( temp ) {
		case 0:
			GradeTooHighException( grade );
			break ;
		case 151:
			GradeTooLowException( grade );
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
	if (this != &p) {
		this->_grade = p.getGrade();
		this->_name = (p.getName());

		// Checks if there is a deep copy :
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
			GradeTooHighException(_grade - val);
			break ;
		default:
			this->_grade -= val;
			std::cout << "[Bureaucrat] 'incrementGrade()' for '" << this->_name << "' has been called.  Current grade : [" << this->_grade << "]." << std::endl;
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
			GradeTooLowException(_grade + val);
			break ;
		default:
			this->_grade += val;
			std::cout << "[Bureaucrat] 'decrementGrade()' for '" << this->_name << "' has been called.   Current grade : [" << this->_grade << "]." << std::endl;
	}
}

void Bureaucrat::GradeTooHighException( int errorGrade ) {
	std::ostringstream oss;
	oss << "[Bureaucrat] error: the given grade {" << errorGrade << "} was too high for '" << this->_name << "'!\n";

	std::string msg = oss.str();
	throw std::runtime_error(msg);
}

void Bureaucrat::GradeTooLowException( int errorGrade ) {
	std::ostringstream oss;
	oss << "[Bureaucrat] error: the given grade {" << errorGrade << "} was too low for '" << this->_name << "'!\n";

	std::string msg = oss.str();
	throw std::runtime_error(msg);
}

void    Bureaucrat::signForm( const AForm& p ) const {
    int checkGrade;

    checkGrade = (_grade <= p.getGradeSign()) ? 1 : 0;
    switch (checkGrade)
    {
        case 0:
            std::cout << "[Bureaucrat] '" << _name << "' {" << _grade << "} couldn’t sign '" << p.getName() << "' {" << p.getGradeSign() << "} because its grade is too low!" << std::endl;
            break;
        case 1:
            std::cout << "[Bureaucrat] '" << _name << "' {" << _grade << "} signed '" << p.getName() << "' {" << p.getGradeSign()<< "}."<< std::endl;
            break ;
    }
}

/* ex02 */

void	Bureaucrat::executeForm( AForm const & form ) {
	int temp1;

	temp1 = (this->_grade <= form.getGradeExec()) ? 1 : 0;
	switch ( temp1 )
	{
		case 1:
			std::cout << "[Bureaucrat] '" << _name << "' {" << _grade << "} executed '" << form.getName() << "' {" << form.getGradeExec() << "} !" << std::endl;
			form.execute( *this );
			break;
		case 0:
			std::cerr << "[Bureaucrat] error: '" << _name << "' {" << _grade << "} could NOT execute '" << form.getName() << "' {" << form.getGradeExec() << "} !" << std::endl;
			break ;
	}
}
