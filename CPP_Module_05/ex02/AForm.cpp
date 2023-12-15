/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:25 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:21:21 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("defaultAForm"), _signed(false), _gradeSign(25), _gradeExec(10) {
    std::cout << "[AForm] Default 'constructor' has been called." << std::endl;
}

AForm::~AForm(void) {
    std::cout << "[AForm] Default 'destructor' has been called." << std::endl;
}

AForm::AForm(const AForm& p) : _name(p.getName()), _signed(p.getStatus()), _gradeSign(p.getGradeSign()), _gradeExec(p.getGradeExec()) {
    std::cout << "[AForm] Copy constructor from '" << p.getName() << "' has been called." << std::endl;
    // No need to assign to constant members
}

AForm::AForm( const std::string name, bool signed_, const unsigned int gradeSign, const unsigned int gradeExec) : _name(name), _signed(signed_), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    /* A better way to check TRUE/FALSE on _signed */
    std::string status = (_signed == TRUE) ? "TRUE" : "FALSE";
    /* Print information about what Form whas created and what data has been given to it. */
    std::cout << "[AForm] Constructor with { '" << _name << "', '" << status << "', " << _gradeSign << ", " << _gradeExec << " } has been called." << std::endl;

    int temp1 = gradeSign;
    int temp2 = gradeExec;

    // Checks if the grade can be out of bounds & is adjusted accordingly.
    temp1 = (temp1 < 1) ? 0 : temp1;
    temp1 = (temp1 > 150) ? 151 : temp1;

    temp2 = (temp2 < 1) ? 0 : temp2;
    temp2 = (temp2 > 150) ? 151 : temp2;

    switch (temp1) {
        case 0:
            throw (AForm::GradeTooHighException());
			break ;
        case 151:
            throw (AForm::GradeTooLowException());
			break ;
    }

    switch (temp2) {
        case 0:
            throw (AForm::GradeTooHighException());
			break ;
        case 151:
            throw (AForm::GradeTooLowException());
			break ;
	}
}

AForm& AForm::operator=(const AForm& p) {
    std::cout << "[AForm] Assignment Operator called from '" << p.getName() << "' to '" << this->_name << "' has been called." << std::endl;
    std::cout << "(warning: name, execution & sign grades cannot be coppied due to 'const' prefix)" << std::endl;
    if (this != &p) { // Checks for self-assigment
        this->_signed = p.getStatus();
    }
    return (*this);
}

std::ostream& operator<<( std::ostream& out, AForm& p ) {
    std::string pStatus = (p.getStatus() == TRUE) ? "TRUE" : "FALSE";
    out << "[AForm] '" << p.getName() << "'s Form grades : {" << p.getGradeSign() << ", " << p.getGradeExec() << "}.";
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

void    AForm::beSigned( const Bureaucrat& p ) {
    int checkGrade;
    
    checkGrade = (_gradeSign < p.getGrade()) ? 1 : 0;
    switch (checkGrade)
    {
        case 1:
            throw (AForm::GradeTooLowException());
            break;
        case 0:
            _signed = TRUE;
    }
}

/* for ex02 */
void	AForm::setSign( bool	signStatus ) {
    this->_signed = signStatus;
}
