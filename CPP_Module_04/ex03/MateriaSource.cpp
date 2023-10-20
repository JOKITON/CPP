/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:39:35 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:56:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = NULL;
	}
	std::cout << "[MateriaSource] has been created." << std::endl;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (slots[i])
			delete slots[i];
	}
	std::cout << "[MateriaSource] has been destroyed." << std::endl;
}

void	MateriaSource::learnMateria( AMateria* mat) {
	int	i = 0;

	while (slots[i] != NULL) {
		i++;
		if (i > 3) { // error-case
			std::cout << "[MateriaSource] error: Too many Materias..." << std::endl;
			return ; }
	}
	slots[i] = mat;
	std::cout << "[MateriaSource] has learned " << mat->getType() << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const & type) {
	if (!type.compare("cure")) {
		AMateria*	ret = new Cure();
		return (ret);
	}
	else if (!type.compare("ice")) {
		AMateria*	ret = new Ice();
		return (ret);
	}
	else {
		return (NULL);
	}
}
