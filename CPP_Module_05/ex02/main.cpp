/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:04:03 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/11 13:31:59 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	std::cout << BBLACK << RED << "-----------------------[Form::execute( Bureaucrat const & p )]-----------------------" << END << std::endl;
	std::cout << std::endl;
	std::cout << BCYAN << RED << "---------------[Creating Bureaucrats...]---------------" << END << std::endl;

	Bureaucrat	lvl3("test3", 137);
	Bureaucrat	lvl2("test2", 45);
	Bureaucrat	lvl1("test1", 5);
	std::cout << std::endl;

	std::cout << BCYAN << RED << "---------------[NON-SIGNED Forms]---------------" << END << std::endl;
	testCreationForm2.execute( lvl3 );
	testRequestForm2.execute( lvl2 );
	testPardonForm2.execute( lvl1 );
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
	std::cout << BBLACK << RED << "-----------------------[Bureaucrat::execute( Form const & form )]-----------------------" << END << std::endl;
	std::cout << std::endl;

	// lvl1.decrementGrade(1);
	lvl1.executeForm( testPardonForm2 );
	
	// lvl2.decrementGrade(1);
	lvl2.executeForm( testRequestForm2 );
	
	// lvl3.decrementGrade(1);
	lvl3.executeForm( testCreationForm2 );

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

int main( void ) {

	/* My own tests */
	try {
		/* Bureaucrat */
		// execBureaucrats();

		/* Form */
		/* Not available, abstact class */

		/* ShrubberyCreationForm */
		execConcreteClasses();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}