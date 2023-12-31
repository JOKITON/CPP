/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 17:54:15 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"

void	subjectTests( void ) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
/* 	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure()); */
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	std::cout << "\033[34m" << "---------[BOB attacks!]--------" << "\033[0m" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	delete tmp;
}

void	execTestsFunctional( void ) {
	std::cout << std::endl;
	std::cout << "\033[35m" << "---------[personalTests(jaizpuru)]--------" << "\033[0m" << std::endl;

	AMateria* mat1 = new Cure();
	AMateria* mat2 = new Ice();
	ICharacter*	tom = new Character("tom");

	std::cout << std::endl;
	std::cout << "\033[34m" << "---------[getName() && use()]--------" << "\033[0m" << std::endl;
	std::cout << std::endl << "[Chacacter] getName() : " << tom->getName() << std::endl;

	mat1->use(*tom);
	mat2->use(*tom);
	std::cout << std::endl;

	std::cout << "\033[34m" << "---------[equip()]--------" << "\033[0m" << std::endl;
	tom->equip(mat1);
	tom->equip(mat2);
	tom->equip(mat1);
	tom->equip(mat2);
	tom->equip(mat2); // error-cases
	tom->equip(mat2);
	std::cout << std::endl;

	std::cout << "\033[34m" << "---------[use()]--------" << "\033[0m" << std::endl;
	tom->use(0, *tom);
	tom->use(1, *tom);
	tom->use(2, *tom);
	tom->use(3, *tom);
	tom->use(-2, *tom); // error-cases
	tom->use(30, *tom);
	std::cout << std::endl;

	std::cout << "\033[34m" << "---------[unequip()]--------" << "\033[0m" << std::endl;
	tom->unequip(0);
	tom->unequip(1);
	tom->unequip(2);
	tom->unequip(3);
	tom->unequip(-5); // error-cases
	tom->unequip(500);

	std::cout << std::endl;
	std::cout << "\033[34m" << "---------[Destructors]--------" << "\033[0m" << std::endl;
	delete mat1;
	delete mat2;
	delete tom;
}

void	execCopyTestsCharacter( void ) {
	std::cout << "\033[35m" << "---------[CopyTestsCharacter]--------" << "\033[0m" << std::endl;
	
	Character	main1("Jokin");
	Character	main2(main1); //copy constructor
	std::cout << "main1.getName() : " << main1.getName() << std::endl;
	std::cout << "main2.getName() : " << main2.getName() << std::endl;

	Character	overload1("Haritz");

	std::cout << "Overload1.getName() : " << overload1.getName() << std::endl;

	std::cout << "\033[34m" << "---------[main1 = overload1]--------" << "\033[0m" << std::endl;
	main1 = overload1;

	std::cout << "main1.getName() : " << main1.getName() << std::endl;

	std::cout << "\033[34m" << "---------[Destructors]--------" << "\033[0m" << std::endl;
}

void	execCopyTestsCure( void ) {
	std::cout << "\033[35m" << "---------[CopyTestsAMateria]--------" << "\033[0m" << std::endl;
	
	Cure	main1;
	Cure	main2(main1); //copy constructor
	std::cout << "main1.getType() : " << main1.getType() << std::endl;
	std::cout << "main2.getName() : " << main2.getType() << std::endl;

	Cure	overload1;

	std::cout << "Overload1.getName() : " << overload1.getType() << std::endl;

	std::cout << "\033[34m" << "---------[main1 = overload1]--------" << "\033[0m" << std::endl;
	main1 = overload1;

	std::cout << "main1.getName() : " << main1.getType() << std::endl;

	std::cout << "\033[34m" << "---------[Destructors]--------" << "\033[0m" << std::endl;
}

void	execCopyTestsIce( void ) {
	std::cout << "\033[35m" << "---------[CopyTestsAMateria]--------" << "\033[0m" << std::endl;
	
	Ice	main1;
	Ice	main2(main1); //copy constructor
	std::cout << "main1.getType() : " << main1.getType() << std::endl;
	std::cout << "main2.getName() : " << main2.getType() << std::endl;

	Ice	overload1;

	std::cout << "Overload1.getName() : " << overload1.getType() << std::endl;

	std::cout << "\033[34m" << "---------[main1 = overload1]--------" << "\033[0m" << std::endl;
	main1 = overload1;

	std::cout << "main1.getName() : " << main1.getType() << std::endl;

	std::cout << "\033[34m" << "---------[Destructors]--------" << "\033[0m" << std::endl;
}

void	execCopyTestsMateriaSource( void ) {
	std::cout << "\033[35m" << "---------[CopyTestsMateriaSource]--------" << "\033[0m" << std::endl;
	MateriaSource	test1;
	AMateria*	cure1 = new Cure();
	
	std::cout << "\033[34m" << "---------[learnMtearia]--------" << "\033[0m" << std::endl;
	test1.learnMateria(cure1);
	
	std::cout << "\033[34m" << "---------[CopyConstructor]--------" << "\033[0m" << std::endl;
	MateriaSource	test2(test1);

	std::cout << "\033[34m" << "---------[AssigmentOperator]--------" << "\033[0m" << std::endl;
	MateriaSource	test3;

	test3 = test1;

	std::cout << "\033[34m" << "---------[Destructors]--------" << "\033[0m" << std::endl;
}

int main(void) {
	// Subject tests
	subjectTests();

	// my Own tests
	execTestsFunctional();

	execCopyTestsCharacter();

	execCopyTestsCure();

	execCopyTestsIce();

	execCopyTestsMateriaSource();

	// I did not add tests for Copy Constructors & Assigment Operators in other directories...	
	// Why?
	// Coping with Abstract classes, inherited variables, spaces on arrays that may be empty/full...

    return 0;
}
