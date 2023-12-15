/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:04:03 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:38:02 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	execBureaucrats( void ) {

	std::cout << BCYAN << BLACK << "-----------------------[Tests 'Bureaucrat']-----------------------" << END << std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[DefaultConstructor]-----------------------" << END << std::endl;

	Bureaucrat	test1;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[DataConstructor]-----------------------" << END << std::endl;
	Bureaucrat Top("Top", 2);
	Bureaucrat Bottom("Bottom", 149);
/* 	Bureaucrat test2("test2", 1321); // error-case
	Bureaucrat test3("test3", -432); */

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[CopyConstructor]-----------------------" << END << std::endl;

	Bureaucrat test4( test1 );

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[getName]-----------------------" << END << std::endl;
	
	std::cout << "Data of Bureaucrat 'Top' : [" << Top.getName() << " | " << Top.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'Bottom' : [" << Bottom.getName() << " | " << Bottom.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test1' : [" << test1.getName() << " | " << test1.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test4' : [" << test4.getName() << " | " << test4.getGrade() << "]" << std::endl;


	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[IncrementGrade]-----------------------" << END << std::endl;

	std::cout << std::endl;
	Top.incrementGrade(1);
/* 	Top.incrementGrade(1); // error-case
	Top.incrementGrade(1); */

	std::cout << std::endl;
	Bottom.incrementGrade(1);

	std::cout << std::endl;
	test4.incrementGrade(0);
	test4.incrementGrade(30);
/* 	test4.incrementGrade(1000); // error-cases
	test4.incrementGrade(-1000); */

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[DecrementGrade]-----------------------" << END << std::endl;

	std::cout << std::endl;
	Top.decrementGrade(1);
	Top.decrementGrade(1);

	std::cout << std::endl;
	Bottom.decrementGrade(1);
	Bottom.decrementGrade(1);
	/* Bottom.decrementGrade(1); // error-case */

	std::cout << std::endl;
	test4.decrementGrade(0);
	test4.decrementGrade(20);
/* 	test4.decrementGrade(1000); // error-cases
	test4.decrementGrade(-1000); */


	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[OverloadOperator]-----------------------" << END << std::endl;

	std::cout << Top;
	std::cout << Bottom;
	std::cout << test1;
	std::cout << test4;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[AssignmentOperator]-----------------------" << END << std::endl;

	Top = Bottom;
	test1 = test4;

	std::cout << "Data of Bureaucrat 'Top' : [" << Top.getName() << " | " << Top.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test1' : [" << test1.getName() << " | " << test1.getGrade() << "]" <<std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

void	execConcreteClasses( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ Tests 'ShrubberyCreationForm' ]-----------------------" << END << std::endl;
	std::cout << std::endl;

	std::cout << BCYAN << RED << "---------------[Creating Forms...]---------------" << END << std::endl;
	ShrubberyCreationForm	testForm1("testForm1");
	RobotomyRequestForm	testForm2("testForm2");
	PresidentialPardonForm	testForm3("testForm3");

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Default Constructor]-----------------------" << END << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm	testCreationForm1;

	RobotomyRequestForm		testRequestForm1;

	PresidentialPardonForm	testPardonForm1;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Copy Constructor]-----------------------" << END << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm	testCreationForm2(testForm1);

	RobotomyRequestForm		testRequestForm2(testForm2);

	PresidentialPardonForm	testPardonForm2(testForm3);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ Assignment Overload Operator (=) ]-----------------------" << END << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm	testCreationForm3 = testCreationForm2;
	RobotomyRequestForm		testRequestForm3 = testRequestForm2;
	PresidentialPardonForm	testPardonForm3 = testPardonForm2;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Form::execute( Bureaucrat const & p )]-----------------------" << END << std::endl;
	std::cout << std::endl;
	std::cout << BCYAN << RED << "---------------[Creating Bureaucrats...]---------------" << END << std::endl;

	Bureaucrat	lvl3("test3", 137);
	Bureaucrat	lvl2("test2", 45);
	Bureaucrat	lvl1("test1", 5);
	std::cout << std::endl;

	std::cout << BCYAN << RED << "---------------[NON-SIGNED Forms]---------------" << END << std::endl;
	// testCreationForm2.execute( lvl3 );
	// testRequestForm2.execute( lvl2 );
	// testPardonForm2.execute( lvl1 );
	std::cout << std::endl;

	std::cout << BCYAN << RED << "---------------[Sign the Forms]---------------" << END << std::endl;
	testCreationForm2.beSigned( lvl3 );
	testRequestForm2.beSigned( lvl2 );
	testPardonForm2.beSigned( lvl1 );
	std::cout << std::endl;

	std::cout << BCYAN << RED << "---------------[SIGNED Forms]---------------" << END << std::endl;
	testCreationForm2.execute( lvl3 );
	testRequestForm2.execute( lvl2 );
	testPardonForm2.execute( lvl1 );
	std::cout << std::endl;

/* 	lvl3.decrementGrade( 1 ); // error-cases
	testCreationForm2.execute( lvl3 ); */

/* 	lvl2.decrementGrade( 1 );
	testRequestForm2.execute( lvl2 ); */

/* 	lvl1.decrementGrade( 1 );
	testPardonForm2.execute( lvl1 ); */

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Bureaucrat::executeForm( Form const & form )]-----------------------" << END << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm	testCreationForm4; // error-case (non-signed)
	lvl1.executeForm( testCreationForm4 );

	// lvl1.decrementGrade( 1 ); // error-case (gradeTooLow)

	// lvl1.decrementGrade(1);
	lvl1.executeForm( testPardonForm2 );
	
	// lvl2.decrementGrade(1);
	lvl2.executeForm( testRequestForm2 );
	
	// lvl3.decrementGrade(1);
	lvl3.executeForm( testCreationForm2 );

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

void	execInterns( void ) {
	std::cout << BCYAN << BLACK << "-----------------------[Tests 'Interns']-----------------------" << END << std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[DefaultConstructor]-----------------------" << END << std::endl;

	Intern	test1;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[CopyConstructor]-----------------------" << END << std::endl;

	Intern	test2(test1);

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[Oveload Assignment Operator (=) ]-----------------------" << END << std::endl;

	Intern test3;

	test3 = test1;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[ Form& Intern::makeForm(formType, formName) ]-----------------------" << END << std::endl;

	AForm *testForm1;
	AForm *testForm2;
	AForm *testForm3;

	std::cout << std::endl;
	testForm1 = test1.makeForm("shrubbery creation", "testForm1");
	std::cout << std::endl;
	testForm2 = test1.makeForm("robotomy request", "Bender");
	std::cout << std::endl;
	testForm3 = test1.makeForm("presidential pardon", "testForm3");
	std::cout << std::endl;
	test1.makeForm("presidential pardo", "testForm3"); // error-case
	test1.makeForm("", "testForm3");
	
	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[ Overload Operator ]-----------------------" << END << std::endl;

	std::cout << *testForm1;
	std::cout << *testForm2;
	std::cout << *testForm3;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;

	delete testForm1;
	delete testForm2;
	delete testForm3;
}

int main( void ) {

	/* My own tests */
	try {

		/* Bureaucrat (ex00) */
		// execBureaucrats();

		/* Form (ex01)*/
		/* Not available, abstact class */

		/* Concrete Classes (ex02) */
		// execConcreteClasses();

		/* Intern (ex03) */
		execInterns();

	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}
