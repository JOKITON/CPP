/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:57:09 by jokin             #+#    #+#             */
/*   Updated: 2023/06/29 20:07:38 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::randomChump(std::string& name) {
	Zombie	temp;

	temp.name = name;
	std::cout << temp.name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

