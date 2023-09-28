/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:39:36 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 02:37:45 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <unistd.h> 
#include <stdio.h>
#include <iomanip>

class ClapTrap
{
private:
	std::string	  name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDmg;
		
public:
	// ex00 Functions
	// --------------
	ClapTrap(std::string	&name);
	virtual ~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	// ex01 Functions
	// --------------
	std::string	getName(void) const;
	int			getAttackDmg(void) const;
	int			getEnergyPoints(void) const;
	int			getHealth(void) const;
	void		decreaseEnergy(int amount);

	// ex02 Functions
	// --------------
	void		setName(std::string name);
	void		setHitPoints(int amount);
	void		setEnergyPoints(int amount);
	void		setAttackDmg(int amount);
};

#endif