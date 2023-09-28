/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:20 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 02:12:05 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
	
	public:
		// ex01 Functions
		// --------------
		ScavTrap(std::string& name);
		virtual ~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate(void);
};


#endif

