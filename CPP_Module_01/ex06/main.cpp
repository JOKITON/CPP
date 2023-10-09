/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:58:07 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 17:01:46 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int	main(int ac, char **ar) {
	switch (ac) {
		case (1):
			std::cout << "\tChoose between these four options for Harl : \n\n\t";
			std::cout << "1. [DEBUG]\n" << "\t2. [INFO]\n" << "\t3. [WARNING]\n" << "\t4. [ERROR]\n";
			return (1);
		case (2):
			Harl		obj;
			obj.complain(ar[1]);
    }
	return (0);
}
