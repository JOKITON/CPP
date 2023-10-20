/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 19:02:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"

void	subjectTests( void ) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
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
}

void	execTests( void ) {
	std::cout << std::endl;
	std::cout << "\033[34m" << "---------[personalTests(jaizpuru)]--------" << "\033[0m" << std::endl;

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

int main(void) {
	// Subject tests
	subjectTests();

	// my Own tests
	execTests();

    return 0;
}
