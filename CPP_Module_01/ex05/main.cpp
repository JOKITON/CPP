/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:05:41 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 17:00:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	HarlLife(void) {
	std::string	input;
	Harl		Harl;
	while (1) {
		Harl.complain("DEBUG");
		usleep(1500000);
		Harl.complain("INFO");
		usleep(1500000);
		Harl.complain("WARNING");
		usleep(1500000);
		Harl.complain("ERROR");
		usleep(1500000);
		std::cout << "\n\t----------------------------\n";
	}
}

int	main(void) {
	HarlLife();
	return (0);
}

