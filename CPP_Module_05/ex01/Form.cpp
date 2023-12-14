/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:25 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 12:37:22 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeSign(25), _gradeExec(10) {
    std::cout << "[Form] Default 'constructor' has been called." << std::endl;
}

Form::~Form(void) {
    std::cout << "[Form] Default 'destructor' has been called." << std::endl;
}

Form::Form(const Form& p) : _name(p.getName()), _signed(p.getStatus()), _gradeSign(p.getGradeSign()), _gradeExec(p.getGradeExec()) {
    std::cout << "[Form] Copy constructor from '" << p.getName() << "' has been called." << std::endl;
    // No need to assign to constant members
}

Form::Form( const std::string name, bool signed_, const unsigned int gradeSign, const unsigned int gradeExec) : _name(name), _signed(signed_), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    /* A better way to check TRUE/FALSE on _signed */
    std::string status = (_signed == TRUE) ? "TRUE" : "FALSE";
    /* Print information about what Form whas created and what data has been given to it. */

    unsigned int temp1 = gradeSign;
    unsigned int temp2 = gradeExec;

    // Checks if the grade can be out of bounds & is adjusted accordingly.
    temp1 = (temp1 < 1) ? 0 : temp1;
    temp1 = (temp1 > 150) ? 151 : temp1;

    temp2 = (temp2 < 1) ? 0 : temp2;
    temp2 = (temp2 > 150) ? 151 : temp2;

    switch (temp1) {
        case 0:
            throw (Form::GradeTooHighException());
			break ;
        case 151:
            throw (Form::GradeTooLowException());
			break ;
    }

    switch (temp2) {
        case 0:
            throw (Form::GradeTooHighException());
			break ;
        case 151:
            throw (Form::GradeTooLowException());
			break ;
	}
    std::cout << "[Form] Constructor with { '" << _name << "', '" << status << "', " << _gradeSign << ", " << _gradeExec << " } has been called." << std::endl;
}

Form& Form::operator=(const Form& p) {
    std::cout << "[Form] Assignment Operator called to '" << getName() << "' from '" << p.getName() << "' has been called." << std::endl;
    std::cout << "\033[34m" << "(warning: name, execution & sign grades cannot be coppied due to 'const' prefix)" << END << std::endl;
    if (this != &p) { // Checks for self-assigment
        this->_signed = p.getStatus();
    }
    return (*this);
}

std::ostream& operator<<( std::ostream& out, Form& p ) {
    std::string pStatus = (p.getStatus() == TRUE) ? "TRUE" : "FALSE";
    out << "[Form] [ " << p.getName() << " | " << pStatus << " | " << p.getGradeSign() << " | " << p.getGradeExec() << " ]" << std::endl;

	return out;
}

const std::string& Form::getName( void ) const {
    return this->_name;
}

bool Form::getStatus( void ) const {
    return this->_signed;
}

unsigned int Form::getGradeSign( void ) const {
    return this->_gradeSign;
}

unsigned int Form::getGradeExec( void ) const {
    return this->_gradeExec;
}

void    Form::beSigned( const Bureaucrat& p ) {
    unsigned int checkGrade;
    
    checkGrade = (_gradeSign < p.getGrade()) ? 1 : 0;
    switch (checkGrade)
    {
        case 1:
            throw (Form::GradeTooLowException());
            break;
        case 0:
            _signed = TRUE;
    }
}
