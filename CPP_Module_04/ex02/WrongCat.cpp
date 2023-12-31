/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:50:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/27 11:26:45 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "[WrongCat] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat &p) : WrongAnimal(p) {
	this->type = p.getType();
	std::cout << "[WrongCat] Copy Constructed called from " << this->type << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "[WrongCat] " << "has been destroyed!" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& p) {
	std::cout << "[WrongCat] Assigment Operator called from " << this->type << " to " << p.getType() << std::endl;
	if (this != &p)
		this->type = p.getType();
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "[WrongCat] Meowwwww" << std::endl;
	return ;
}
