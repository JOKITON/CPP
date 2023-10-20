/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 00:11:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:55:46 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria	*slots[4];
	public:
		Character( void );
		Character( std::string name );
		virtual ~Character ( void );
		virtual	std::string const & getName() const;
		virtual	void unequip(int idx);
		virtual	void equip(AMateria* m);
		virtual	void use(int idx, ICharacter& target);
};

#endif
