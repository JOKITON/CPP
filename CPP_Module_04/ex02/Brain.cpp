/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:47:56 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/23 19:53:21 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void) {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		std::ostringstream os;

		os << i;
		this->ideas[i] = "[ Sheep n." + os.str() + "]";
	}
	std::cout << "[Brain] Constructor called" << std::endl;
	return ;
}

Brain::~Brain( void) {
	delete[] ideas; // for (new[]) operator
	std::cout << "[Brain] Destructor called" << std::endl;
	return ;
}

Brain::Brain( Brain& p ) {
	std::string *ref = p.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = ref[i] + "_stolen";
	}
	std::cout << "[Brain] Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain & p) {
	*this = p;
	std::cout << "[Brain] Copy Overload Operator called" << std::endl;
	return *this;
}

std::string*	Brain::getIdeas(void) {
	return (this->ideas);
}
