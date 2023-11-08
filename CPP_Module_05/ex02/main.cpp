/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:04:03 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/08 19:40:16 by jaizpuru         ###   ########.fr       */
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

void	execForms( void ) {
	std::cout << BCYAN << BLACK << "-----------------------[Test 'Forms']-----------------------" << END << std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[DefaultConstructor]-----------------------" << END << std::endl;

	Form	jobSalary;
	Form	jobExtraHours;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[DataConstructor]-----------------------" << END << std::endl;

	Form	scholarshipMargin("scholarshipMargin", FALSE, 5, 10);
	Form	averageSalary( "averageSalary", FALSE, 8, 3);
	/* Form	customerService( "customerService", FALSE, -30, -1); // error-cases
	Form	healthyLunch( "healthyLuch", FALSE, 150, 1); */

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[CopyConstructor]-----------------------" << END << std::endl;

	Form	sM2(scholarshipMargin);

	std::string sM2status = (sM2.getStatus() == TRUE) ? "TRUE" : "FALSE";
	std::cout << "Data of Form 'scholarshipMargin2' : [" << sM2.getName() << " | " << sM2status << " | " << sM2.getGradeSign() << " | " << sM2.getGradeExec() << "]" << std::endl;
	
	
	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[getters()]-----------------------" << END << std::endl;
	std::string jobExtraHoursStatus = (jobExtraHours.getStatus() == TRUE) ? "TRUE" : "FALSE";
	std::cout << "Data of Form 'jobExtraHours' : [" << jobExtraHours.getName() << " | " << jobExtraHoursStatus << " | " << jobExtraHours.getGradeSign() << " | " << jobExtraHours.getGradeExec() << "]" << std::endl;
	std::string averageSalaryStatus = (averageSalary.getStatus() == TRUE) ? "TRUE" : "FALSE";
	std::cout << "Data of Form 'averageSalary' : [" << averageSalary.getName() << " | " << averageSalaryStatus << " | " << averageSalary.getGradeSign() << " | " << averageSalary.getGradeExec() << "]" << std::endl;
	

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[OverloadOperator]-----------------------" << END << std::endl;

	std::cout << sM2;
	std::cout << scholarshipMargin;
	std::cout << averageSalary;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[beSigned()]-----------------------" << END << std::endl;

	Bureaucrat	chiefExecutive( "chiefExecutive", 4 );
	std::cout << std::endl;
	Bureaucrat	streetCleaner( "streetCleaner", 20 );

	sM2.beSigned( chiefExecutive );
	/* sM2.beSigned( streetCleaner ); */ // error-case
	averageSalary.beSigned( chiefExecutive );
	jobExtraHours.beSigned( streetCleaner );

	std::cout << std::endl;
	sM2status = (sM2.getStatus() == TRUE) ? "TRUE" : "FALSE";
	std::cout << "Data of Form 'sM2' : [" << sM2.getName() << " | " << sM2status << " | " << sM2.getGradeSign() << " | " << sM2.getGradeExec() << "]" << std::endl;
	averageSalaryStatus = (averageSalary.getStatus() == TRUE) ? "TRUE" : "FALSE";
	std::cout << "Data of Form 'averageSalary' : [" << averageSalary.getName() << " | " << averageSalaryStatus << " | " << averageSalary.getGradeSign() << " | " << averageSalary.getGradeExec() << "]" << std::endl;
	jobExtraHoursStatus = (jobExtraHours.getStatus() == TRUE) ? "TRUE" : "FALSE";
	std::cout << "Data of Form 'jobExtraHours' : [" << jobExtraHours.getName() << " | " << jobExtraHoursStatus << " | " << jobExtraHours.getGradeSign() << " | " << jobExtraHours.getGradeExec() << "]" << std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[signForm()]-----------------------" << END << std::endl;

	sM2.signForm( chiefExecutive );
	//sM2.beSigned( streetCleaner );
	averageSalary.signForm( chiefExecutive );
	jobExtraHours.signForm( streetCleaner );

	std::cout << std::endl;
	std::cout << BCYAN << BLACK << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

void	execConcreteClasses( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ Tests 'ShrubberyCreationForm' ]-----------------------" << END << std::endl;
	std::cout << std::endl;

	Form	testForm1("testForm1", 0, 145, 137);
	Form	testForm2("testForm2", 0, 72, 45);
	Form	testForm3("testForm3", 0, 25, 5);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Default Constructor]-----------------------" << END << std::endl;

	ShrubberyCreationForm	testCreationForm1;

	RobotomyRequestForm		testRequestForm1;

	PresidentialPardonForm	testPardonForm1;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Copy Constructor]-----------------------" << END << std::endl;


	ShrubberyCreationForm	testCreationForm2(testForm1);

	RobotomyRequestForm		testRequestForm2(testForm2);

	PresidentialPardonForm	testPardonForm2(testForm3);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[execute( Bureaucrat const & p )]-----------------------" << END << std::endl;

	Bureaucrat	lvl3("test3", 137);
	Bureaucrat	lvl2("test2", 45);
	Bureaucrat	lvl1("test1", 5);
	std::cout << std::endl;

	testCreationForm2.execute( lvl3 );
	testRequestForm2.execute( lvl2 );
	testPardonForm2.execute( lvl1 );
	std::cout << std::endl;

	testCreationForm2.beSigned( lvl3 );
	testRequestForm2.beSigned( lvl2 );
	testPardonForm2.beSigned( lvl1 );
	std::cout << std::endl;

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
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

int main( void ) {

	/* My own tests */
	try {
		/* Bureaucrat */
		// execBureaucrats();

		/* Form */
		// execForms();

		/* ShrubberyCreationForm */
		execConcreteClasses();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}
