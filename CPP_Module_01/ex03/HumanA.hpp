/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:51:04 by jokin             #+#    #+#             */
/*   Updated: 2023/06/30 13:59:09 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanA(void);
		~HumanA( void );
		HumanA(std::string newName, Weapon &newWeapon);
		void	attack( void );
};

#endif

