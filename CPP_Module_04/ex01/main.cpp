/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:07:19 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/27 11:24:35 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	subjectTests( void ) {
	const Animal* h = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << h->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	h->makeSound();
	i->makeSound();
	j->makeSound();

	delete i;
	delete j;
	delete h;
}

void	execTests( void ) {

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
	
	const	Animal	*test[6];

	std::cout << "\033[34m" << "---------ArrayOfAnimals--------" << "\033[0m" << std::endl;
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
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

	std::cout << "\033[34m" << "---------ArrayOfAnimals--------" << "\033[0m" << std::endl;
	std::cout << "\033[34m" << "---------(Destruction)---------" << "\033[0m" << std::endl;
	// free memory
	for (int i = 0; i < 6; i++) {
		delete test[i];
	}

	std::cout << std::endl;
	std::cout << "\033[34m" << "----------DeepCopyTest---------" << "\033[0m" << std::endl;
	std::cout << "\033[34m" << "-------------------------------" << "\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[34m" << "-----------[test1]---------" << "\033[0m" << std::endl;
	const Animal*	catSave;
	const Animal*	cat1 = new Cat();
	const Animal	*dog1 = new Dog();
	std::cout << std::endl;

	std::cout << "\033[34m" << "-----------[Cat = Dog]---------" << "\033[0m" << std::endl;
	catSave = cat1;
	cat1->makeSound();
	cat1 = dog1;
	cat1->makeSound(); // cat1 is now a 'Dog'

	std::cout << std::endl;
	std::cout << "\033[34m" << "-----------[test2]---------" << "\033[0m" << std::endl;
	const Animal*	cat2 = new Cat();
	std::cout << std::endl;

	std::cout << "\033[34m" << "-----------[dogSave(dog1)]---------" << "\033[0m" << std::endl;
	const Animal*	dogSave(dog1);
	dogSave->makeSound();
	std::cout << "\033[34m" << "-----------[Dog = Cat]---------" << "\033[0m" << std::endl;
	dog1->makeSound();
	dogSave = dog1; // we keep pointer to dog to liberate mem after
	dog1 = cat2;
	dog1->makeSound();

	std::cout << std::endl;
	std::cout << "\033[34m" << "----------DeepCopyTest---------" << "\033[0m" << std::endl;
	std::cout << "\033[34m" << "-------------(end)-------------" << "\033[0m" << std::endl;
	delete dog1;
	delete catSave;
	delete dogSave;

	std::cout << "\033[34m" << "---------[Brain-Tests(Start)]--------" << "\033[0m" << std::endl;
	const	Dog	j;

	std::cout << "\033[34m" << "---------[Copy Constructor]--------" << "\033[0m" << std::endl;
	Brain	test1(j.getBrain());
	std::string*	retIdeas1;
	
	retIdeas1 = test1.getIdeas();
	std::cout << "Ideas1 : " << *test1.getIdeas() << std::endl;
	std::cout << "Ideas1 : " << *retIdeas1 << std::endl;

	std::cout << "\033[34m" << "---------[Overload Assigment Operator]--------" << "\033[0m" << std::endl;
	Brain	test2;
	Brain	test3;

	test3 = test2;

	std::cout << "Ideas2 : " << *test2.getIdeas() << std::endl;
	std::cout << "Ideas3 : " << *test3.getIdeas() << std::endl;


	std::cout << "\033[34m" << "---------[Brain-Tests(End)]--------" << "\033[0m" << std::endl;

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

	std::cout << "\033[35m" << "----------Destructors----------" << "\033[0m" << std::endl;
}

int	main(void) {
	// Subject tests
	subjectTests();

	// my Own tests
	execTests();

	return 0;
}
