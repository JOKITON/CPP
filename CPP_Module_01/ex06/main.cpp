/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:58:07 by jokin             #+#    #+#             */
/*   Updated: 2023/09/20 13:03:32 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int	main(int ac, char **ar) {
	Harl		obj;
	switch (ac) {
		case (1):
			std::cout << "\tChoose between these four options for Harl : \n\n\t";
			std::cout << "1. [DEBUG]\n" << "\t2. [INFO]\n" << "\t3. [WARNING]\n" << "\t4. [ERROR]\n";
			return (1);
		case (2):
			obj.complain(ar[1]);
    }
	return (0);
}
