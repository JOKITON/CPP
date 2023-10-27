/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:50:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 21:45:33 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "[WrongCat] " << this->getType() << " has been constructed!" << std::endl;
}

WrongCat::WrongCat( const WrongCat &p) : WrongAnimal(p) {
	std::cout << "[WrongCat] Copy constructor called from " << p.getType() << std::endl;
	this->type = p.getType();
}

WrongCat::~WrongCat(void) {
	std::cout << "[WrongCat] " << this->getType() << " has been destroyed!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& p) {
	if (this != &p)
		this->type = p.getType();
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "[WrongCat] Meowwwww" << std::endl;
}
