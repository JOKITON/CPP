/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:38:58 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 13:15:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap, public ClapTrap {
	private:
		std::string name;

	public:
		DiamondTrap(std::string& name);
		~DiamondTrap();
		void	attack(std::string& name);
		void	whoAmI(void);
		void	setHitPoints(int amount);
		void	setEnergyPoints(int amount);
		void	setAttackDmg(int amount);
};


#endif
