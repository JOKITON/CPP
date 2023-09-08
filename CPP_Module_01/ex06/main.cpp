/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:58:07 by jokin             #+#    #+#             */
/*   Updated: 2023/07/07 08:37:32 by jokin            ###   ########.fr       */
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
			std::string	input = ar[1];
			LogLevel level;
            
            if (input == "DEBUG")
        	  level = DEBUG;
            else if (input == "INFO")
              level = INFO;
            else if (input == "WARNING")
              level = WARNING;
            else if (input == "ERROR")
              level = ERROR;
			else
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            obj.complain(level);
    }
	return (0);
}
