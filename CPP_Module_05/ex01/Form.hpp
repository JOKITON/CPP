/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:19:57 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/07 10:48:48 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
private:
    const std::string _name;
    bool _signed;
    const int _gradeSign;
    const int _gradeExec;

    void GradeTooLowException( int errorGrade );
    void GradeTooHighException( int errorGrade );

public:
    Form(void);
    ~Form(void);

    Form(const Form& p);
    Form( const std::string name, bool signed_, const int gradeSign, const int gradeExec);
    Form& operator=(const Form& p);

    const std::string& getName(void) const;
    bool getStatus(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
};



#endif