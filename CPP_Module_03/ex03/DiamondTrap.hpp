/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:38:58 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 02:42:05 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;

	public:
		// ex03 Functions
		// --------------
		DiamondTrap(std::string& name);
		~DiamondTrap();
		using ScavTrap::attack;
		void	whoAmI(void);
		void	setHitPoints(int amount);
		void	setEnergyPoints(int amount);
		void	setAttackDmg(int amount);
};


#endif
