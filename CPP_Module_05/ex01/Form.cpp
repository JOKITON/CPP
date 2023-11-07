/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:21:59 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/07 10:39:48 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeSign(25), _gradeExec(10) {
    std::cout << "[Form] Default 'constructor' has been called." << std::endl;
}

Form::~Form(void) {
    std::cout << "[Form] Default 'destructor' has been called." << std::endl;
}

Form::Form(const Form& p) : _signed(p.getStatus()), _gradeSign(p.getGradeSign()), _gradeExec(p.getGradeExec()) {
    std::cout << "[Form] Copy constructor from '" << p.getName() << "' has been called." << std::endl;
    // No need to assign to constant members
}

Form::Form( const std::string name, bool signed_, const int gradeSign, const int gradeExec) : _name(name), _signed(signed_), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    std::cout << "[Form] Constructor with { " << _name << ", " << _signed << ", " << _gradeSign << ", " << _gradeExec << " } has been called." << std::endl;

    int temp1 = gradeSign;
    int temp2 = gradeExec;

    // Checks if the grade can be out of bounds & is adjusted accordingly.
    temp1 = (temp1 < 1) ? 0 : temp1;
    temp1 = (temp1 > 150) ? 151 : gradeSign;

    temp2 = (temp2 < 1) ? 0 : temp2;
    temp2 = (temp2 > 150) ? 151 : gradeExec;

    switch (temp1) {
        case 0:
            GradeTooHighException( gradeSign );
			break ;
        case 151:
            GradeTooLowException( gradeSign );
			break ;
    }

    switch (temp2) {
        case 0:
            GradeTooHighException( gradeExec );
			break ;
        case 151:
            GradeTooLowException( gradeExec );
			break ;
	}
}

Form& Form::operator=(const Form& p) {
    std::cout << "[Form] Assignment Operator called from '" << p.getName() << "' to '" << this->_name << "' has been called." << std::endl;
    if (this != &p) { // Checks for self-assigment
        this->_signed = p.getStatus();
    }
    return (*this);
}

const std::string& Form::getName( void ) const {
    return this->_name;
}

bool Form::getStatus( void ) const {
    return this->_signed;
}

int Form::getGradeSign( void ) const {
    return this->_gradeSign;
}

int Form::getGradeExec( void ) const {
    return this->_gradeExec;
}

void Form::GradeTooHighException( int errorGrade ) {
	std::ostringstream oss;
	oss << "[Form] error: the given grade {" << errorGrade << "} was too high for '" << this->_name << "'!\n";

	std::string msg = oss.str();
	throw std::runtime_error(msg);
}

void Form::GradeTooLowException( int errorGrade ) {
	std::ostringstream oss;
	oss << "[Form] error: the given grade {" << errorGrade << "} was too low for '" << this->_name << "'!\n";

	std::string msg = oss.str();
	throw std::runtime_error(msg);
}