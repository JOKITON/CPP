/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:26:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/05 00:09:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	std::cout << "Default constructor called." << std::endl;
	return ;
}

AMateria::AMateria	(std::string const & type) : _type(type) {
	std::cout << "Default (arg) Constructor called." << std::endl;
	return ;
}

AMateria::~AMateria( void ) {
	std::cout << "Default constructor called." << std::endl;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria tried to reach " << target.getName() << std::endl;
}
