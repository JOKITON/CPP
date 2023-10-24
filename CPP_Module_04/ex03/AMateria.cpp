/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:26:42 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/17 18:08:37 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("materia") {
	std::cout << "[AMateria] constructor called." << std::endl;
	return ;
}

AMateria::AMateria	(std::string const & type) : _type(type) {
	std::cout << "[AMateria] (arg) constructor called." << std::endl;
	return ;
}

AMateria::AMateria( AMateria& p ) {
        this->_type = p.getType();
}
AMateria& AMateria::AMateria( AMateria& p ) {
        this->_type = p.getType();
}

AMateria::~AMateria( void ) {
	std::cout << "[AMateria] destructor called." << std::endl;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria tried to reach " << target.getName() << std::endl;
}
