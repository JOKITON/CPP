/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/17 18:40:19 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


int main(void) {
    AMateria* mat1 = new Cure();
	AMateria* mat2 = new Ice();
	ICharacter*	tom = new Character("tom");

	std::cout << std::endl << "[Chacacter] getName() : " << tom->getName() << std::endl;

	mat1->use(*tom);
	mat2->use(*tom);
	std::cout << std::endl;

	tom->equip(mat1);
	tom->equip(mat2);
	tom->equip(mat1);
	tom->equip(mat2);
	tom->equip(mat2); // error-cases
	tom->equip(mat2);
	std::cout << std::endl;

	tom->use(0, *tom);
	tom->use(1, *tom);
	tom->use(2, *tom);
	tom->use(3, *tom);
	tom->use(-2, *tom); // error-cases
	tom->use(30, *tom);
	std::cout << std::endl;

	tom->unequip(0);
	tom->unequip(1);
	tom->unequip(2);
	tom->unequip(3);
	tom->unequip(-5); // error-cases
	tom->unequip(500);

	std::cout << std::endl;
	delete mat1;
	delete mat2;
	delete tom;

    return 0;
}
