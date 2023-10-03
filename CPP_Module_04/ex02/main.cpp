/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:07:19 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/03 20:35:31 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	subjectTests( void ) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete(meta);
}

void	execTests( void ) {
	std::cout << std::endl;
	
	const	Animal	*test[6];

	// half dogs, half cats
	for (int i = 0; i < 6; i++) {
		if (i < 3) // dog
			test[i] = new Dog();
		if (i >= 3) // cat
			test[i] = new Cat();
		if (test[i] == NULL) { // error case
			perror("Allocation has failed.");
			std::cerr << "Exiting...";
			exit (1);
		}
		test[i]->makeSound();
		std::cout << "Type of Animal : " << test[i]->getType() << " [" << i + 1 << "]" << std::endl;
		std::cout << std::endl;
	}


	// free memory
	for (int i = 0; i < 6; i++) {
		delete test[i];
	}
}

int	main(void) {
	// Subject tests
	subjectTests();

	// my Own tests
	execTests();

	return 0;
}
