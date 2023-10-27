/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:07:19 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:39:34 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	subjectTests( void ) {
	std::cout << "\033[35m" << "---------[SubjectTests]--------" << "\033[0m" << std::endl;
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
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "------------[Animal]-----------" << "\033[0m" << std::endl;
	const Animal* animal = new Animal();
	
	const Dog dogAverage;
	const Cat catAverage;
	
	std::cout << "\033[35m" << "------------[CopyConstructor]-----------" << "\033[0m" << std::endl;
	const Dog dogCopy(dogAverage);
	const Cat catCopy(catAverage);
	
	std::cout << "\033[35m" << "------------[AssigmentOperatorAnimal]-----------" << "\033[0m" << std::endl;
	Animal	assignAnimal;
	const Animal	assign2Animal;

	assignAnimal = assign2Animal;
	assignAnimal.makeSound();

	std::cout << "\033[35m" << "------------[AssigmentOperatorDog]-----------" << "\033[0m" << std::endl;
	Dog	assignDog;
	const Dog	assign2Dog;

	assignDog = assign2Dog;
	assignDog.makeSound();

	std::cout << "\033[35m" << "------------[AssigmentOperatorCat]-----------" << "\033[0m" << std::endl;
	Cat	assignCat;
	Cat	assign2Cat;

	assignCat = assign2Cat;
	assignCat.makeSound();


	std::cout << std::endl;
	std::cout << "\033[35m" << "------------[getType()]-----------" << "\033[0m" << std::endl;
	std::cout << "dogAverage->getType [" << dogAverage.getType() << "] " << std::endl;
	std::cout << "catAverage->getType [" << catAverage.getType() << "] " << std::endl;
	catAverage.makeSound(); //will output the cat sound! (not the Animal)
	dogAverage.makeSound(); //will output the dog sound! (not the Animal)
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Animal->getType [" << animal->getType() << "] " << std::endl;
	std::cout << "DogCopy->getType [" << dogCopy.getType() << "] " << std::endl;
	std::cout << "CatCopy->getType [" << catCopy.getType() << "] " << std::endl;
	catCopy.makeSound(); //will output the cat sound! (not the Animal)
	dogCopy.makeSound(); //will output the dog sound! (not the Animal)
	animal->makeSound(); //will output the animal sound
	std::cout << std::endl;

	delete animal;

	std::cout << std::endl;
	std::cout << "\033[34m" << "----------WrongAnimal----------" << "\033[0m" << std::endl;
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << "WrongAnimal->getType [" << wrong_animal->getType() << "] " << std::endl;
	std::cout << "WrongCat->getType [" << wrong_cat->getType() << "] " << std::endl;

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete wrong_cat;
	delete wrong_animal;
}

int	main(void) {
	// Subject tests
	subjectTests();

	// my Own tests
	execTests();

	return 0;
}
