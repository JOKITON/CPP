/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:41:22 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/12 18:01:47 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	execTests( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[myOwnTests]-----------------------" << END << std::endl;
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[STD::STRING]-----------------------" << END << std::endl;
	/* std::string */
	MutantStack<std::string>	testString;

	std::stack<std::string>		testStack1;
	testStack1.push("Buenas tardes testStack1!");
	MutantStack<std::string>	testString2(testStack1);

	MutantStack<std::string>	testString3;
	testString3 = testStack1;

	std::cout << std::endl;

	srand(time(NULL));
	testString.push("Buenas");
	/*for (size_t i = 0; i < 400; i++)
		test1.push(rand()); */
	testString.push(" tardes");
	testString.push(" lunes");
	testString.push(" navidades");
	testString.push(" noches");
	testString.push(" !");

	MutantStack<std::string>::iterator	begin1 = testString.begin();
	MutantStack<std::string>::iterator	end1 = testString.end();

	std::cout << "[testString1] Content : { ";
	while (begin1 != end1)
		std::cout << *begin1++ << ",";
	std::cout << " end }" << std::endl;
    std::cout << std::endl;

	std::cout << "[testString1] Size : " << testString.size() << std::endl;
    std::cout << "[testString2] Size : " << testString2.size() << std::endl;
    std::cout << "[testString3] Size : " << testString3.size() << std::endl;
    std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[INT]-----------------------" << END << std::endl;
	
	MutantStack<int>	testInt1;
	std::stack<int>		testStackInt1;

	MutantStack<int>	testInt2(testStackInt1);

	MutantStack<int>	testInt3;

	testInt3 = testStackInt1;

	for (int i = 6; i < 15; i++)
		testInt2.push(i);

	MutantStack<int>::iterator	beginInt1 = testInt2.begin();
	MutantStack<int>::iterator	endInt1 = testInt2.end();

	std::cout << "[testIter] Content : { ";
	while (beginInt1 != endInt1)
		std::cout << *beginInt1++ << ", ";
	std::cout << "end }" << std::endl;

	std::cout << "[testIter] Size : " << testInt2.size() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[FLOAT]-----------------------" << END << std::endl;
	
	MutantStack<double>	testFloat1;
	std::stack<double>	testFloatStack1;

	MutantStack<double>	testFloat2(testFloatStack1);

	MutantStack<double>	testFloat3;

	testFloat3 = testFloatStack1;

	testFloat2.push(0.4f);
	testFloat2.push(4.32f);
	testFloat2.push(7.12f);
	testFloat2.push(8.98f);

	MutantStack<double>::iterator	beginFloat1 = testFloat2.begin();
	MutantStack<double>::iterator	endFloat1 = testFloat2.end();

	std::cout << "[testIter] Content : { ";
	while (beginFloat1 != endFloat1)
		std::cout << *beginFloat1++ << ", ";
	std::cout << "end }" << std::endl;

	std::cout << "[testIter] Size : " << testFloat2.size() << std::endl;
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;
}

void	subjectTests( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[subjectTests1]-----------------------" << END << std::endl;
	MutantStack<int>
	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop(); // pops the number in the top
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	/* std::cout << std::endl << "**Another form of iterating through a container: (using '[]') " << std::endl;
	for (unsigned long int pos = 0; pos != mstack.size(); pos++) {
		std::cout << mstack[pos] << std::endl;
	} */
	std::stack<int> s(mstack);
}

void	subjectTests2( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[subjectTests2]-----------------------" << END << std::endl;
	std::list<int>	mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(mstack);
}

int	main( void ) {

	/* subject tests */
	subjectTests();
	std::cout << std::endl;

	subjectTests2(); // std::list, made to compare results
	std::cout << std::endl;

	/* my own tests */
	execTests();
}
