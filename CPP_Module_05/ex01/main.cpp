/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:04:03 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/06 19:29:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	execBureaucrats( void ) {

	std::cout << BCYAN << WHITE << "-----------------------[StartTests]-----------------------" << END << std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[DefaultConstructor]-----------------------" << END << std::endl;

	Bureaucrat	test1;

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[DataConstructor]-----------------------" << END << std::endl;
	Bureaucrat Top("Top", 2);
	Bureaucrat Bottom("Bottom", 149);
/* 	Bureaucrat test2("test2", 1321); // error-case
	Bureaucrat test3("test3", -432); */

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[CopyConstructor]-----------------------" << END << std::endl;

	Bureaucrat test4( test1 );

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[getName]-----------------------" << END << std::endl;
	
	std::cout << "Data of Bureaucrat 'Top' : [" << Top.getName() << " | " << Top.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'Bottom' : [" << Bottom.getName() << " | " << Bottom.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test1' : [" << test1.getName() << " | " << test1.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test4' : [" << test4.getName() << " | " << test4.getGrade() << "]" << std::endl;


	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[IncrementGrade]-----------------------" << END << std::endl;

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
	std::cout << BCYAN << WHITE << "-----------------------[DecrementGrade]-----------------------" << END << std::endl;

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
	std::cout << BCYAN << WHITE << "-----------------------[OverloadOperator]-----------------------" << END << std::endl;

	std::cout << Top;
	std::cout << Bottom;
	std::cout << test1;
	std::cout << test4;

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[AssignmentOperator]-----------------------" << END << std::endl;

	Top = Bottom;
	test1 = test4;

	std::cout << "Data of Bureaucrat 'Top' : [" << Top.getName() << " | " << Top.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test1' : [" << test1.getName() << " | " << test1.getGrade() << "]" <<std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

int main( void ) {

	try {
		/* My own tests */
		execBureaucrats();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}
