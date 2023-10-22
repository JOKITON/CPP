/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 00:11:21 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/21 11:31:46 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = NULL;
	}
	std::cout << "[Character] constructor called for (none)" << std::endl;
}

Character::Character( std::string name ) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = NULL;
	}
	std::cout << "[Character] constructor called for " << name << std::endl;
}

Character::~Character( void ){
	for (int i = 0; i < 4; i++) {
		if (slots[i])
			delete slots[i];
	}
	std::cout << "[Character] destructor called." << std::endl;
}

std::string	const & Character::getName(void) const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	int	i = 0;

	if (!m)
		return ;
	while (slots[i] != NULL) {
		i++;
		if (i > 3) { // error-case
			std::cout << "[Character] error: Too many Materias..." << std::endl;
			return ; }
	}
	slots[i] = m;
	std::cout << "[Charater] " << this->_name << " has equiped " << m->getType() << std::endl;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && slots[idx]) {
		this->slots[idx] = NULL;
		std::cout << "[Character] item " << idx << " was unequiped." << std::endl; }
	else
		std::cout << "[Character] error: non-valid slot" << std::endl;
}

void	Character::use(int	idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && slots[idx] != NULL)
		slots[idx]->use(target);
	else // error-case
		std::cout << "[Character] error: non-valid slot" << std::endl;	
}
