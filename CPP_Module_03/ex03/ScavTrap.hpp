/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:20 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 18:41:31 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
	
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate(void);
};


#endif

