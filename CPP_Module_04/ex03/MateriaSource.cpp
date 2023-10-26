/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:39:35 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 17:42:22 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = NULL;
	}
	std::cout << "[MateriaSource] has been created." << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& p ) {
	for (int c = 0; c < 4; c++) {
		if (p.slots[c] != NULL)
			this->slots[c] = p.slots[c]->clone();
		else
			this->slots[c] = NULL;
	}

	std::cout << "[MateriaSource] Copy Assigment called." << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& p ) {
	for (int d = 0; d < 4; d++) {
		delete this->slots[d];
	}

	for (int c = 0; c < 4; c++) {
		if (p.slots[c] != NULL)
			this->slots[c] = p.slots[c]->clone();
		else
			this->slots[c] = NULL;
	}

	std::cout << "[MateriaSource] Assigment Operator Overload called." << std::endl;
	return (*this);
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

	if (!mat)
		return ;
	while (slots[i] != NULL) {
		i++;
		if (i > 3) { // error-case
			delete mat; // free memory in heap just in case
			std::cout << "[MateriaSource] error: Too many Materias..." << std::endl;
			return ; }
	}
	slots[i] = (mat);
	std::cout << "[MateriaSource] has learned " << mat->getType() << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const & type) {
	int i = 0;

	while (slots[i] != NULL) {
		if (slots[i]->getType() == type) {
			std::cout << "[MateriaSource] has created " << type << std::endl;
			return (slots[i]->clone());
		}
		if (i > 3)
			break ;
		i++;
	}
	std::cout << "[MateriaSource] has failed creating " << type << std::endl;
	return (0);
}
