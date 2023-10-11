/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:05:41 by jokin             #+#    #+#             */
/*   Updated: 2023/10/11 17:28:08 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	HarlLife(void) {
	std::string	input;
	Harl		Harl;
	while (1) {
		Harl.complain("DEBUG");
		Harl.complain("INFO");
		Harl.complain("WARNING");
		Harl.complain("ERROR");
		std::cout << "\n\t----------------------------\n";
		// sleep(2);
	}
}

int	main(void) {
	HarlLife();
	return (0);
}

