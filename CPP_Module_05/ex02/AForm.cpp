/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:25 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/11 12:26:49 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeSign(25), _gradeExec(10) {
    std::cout << "[Form] Default 'constructor' has been called." << std::endl;
}

AForm::~AForm(void) {
    std::cout << "[Form] Default 'destructor' has been called." << std::endl;
}

AForm::AForm(const AForm& p) : _name(p.getName()), _signed(p.getStatus()), _gradeSign(p.getGradeSign()), _gradeExec(p.getGradeExec()) {
    std::cout << "[Form] Copy constructor from '" << p.getName() << "' has been called." << std::endl;
    // No need to assign to constant members
}

AForm::AForm( const std::string name, bool signed_, const int gradeSign, const int gradeExec) : _name(name), _signed(signed_), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    /* A better way to check TRUE/FALSE on _signed */
    std::string status = (_signed == TRUE) ? "TRUE" : "FALSE";
    /* Print information about what Form whas created and what data has been given to it. */
    std::cout << "[Form] Constructor with { '" << _name << "', '" << status << "', " << _gradeSign << ", " << _gradeExec << " } has been called." << std::endl;

    int temp1 = gradeSign;
    int temp2 = gradeExec;

    // Checks if the grade can be out of bounds & is adjusted accordingly.
    temp1 = (temp1 < 1) ? 0 : temp1;
    temp1 = (temp1 > 150) ? 151 : temp1;

    temp2 = (temp2 < 1) ? 0 : temp2;
    temp2 = (temp2 > 150) ? 151 : temp2;

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

AForm& AForm::operator=(const AForm& p) {
    std::cout << "[Form] Assignment Operator called from '" << p.getName() << "' to '" << this->_name << "' has been called." << std::endl;
    if (this != &p) { // Checks for self-assigment
        this->_signed = p.getStatus();
    }
    return (*this);
}

std::ostream& operator<<( std::ostream& out, AForm& p ) {
    std::string pStatus = (p.getStatus() == TRUE) ? "TRUE" : "FALSE";
    out << "[Form] '" << p.getName() << "'s Form grades : {" << p.getGradeSign() << ", " << p.getGradeExec() << "}.";
    out << " && status : {" << pStatus << "}." << std::endl;

	return out;
}

const std::string& AForm::getName( void ) const {
    return this->_name;
}

bool AForm::getStatus( void ) const {
    return this->_signed;
}

int AForm::getGradeSign( void ) const {
    return this->_gradeSign;
}

int AForm::getGradeExec( void ) const {
    return this->_gradeExec;
}

void AForm::GradeTooHighException( const int errorGrade ) const {
	std::ostringstream oss;
	oss << "[Form] error: the given grade {" << errorGrade << "} was too high for '" << this->_name << "'!\n";

	std::string msg = oss.str();
	throw std::runtime_error(msg);
}

void AForm::GradeTooLowException( const int errorGrade ) const {
	std::ostringstream oss;
	oss << "[Form] error: the given grade {" << errorGrade << "} was too low for '" << this->_name << "'!\n";

	std::string msg = oss.str();
	throw std::runtime_error(msg);
}

void    AForm::beSigned( const Bureaucrat& p ) {
    int checkGrade;
    
    checkGrade = (_gradeSign < p.getGrade()) ? 1 : 0;
    switch (checkGrade)
    {
        case 1:
            GradeTooLowException( p.getGrade() );
            break;
        case 0:
            _signed = TRUE;
            p.signForm( *this );
            // std::cout << "[Form] '" << this->_name << "' {" << this->_gradeSign << "} has been signed by '"  << p.getName() << "', using a grade of {" << p.getGrade() << "}!." << std::endl;
    }
}