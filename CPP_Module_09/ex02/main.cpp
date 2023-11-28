/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:21:45 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/28 22:43:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int	main( int ac, char **ar ) {
	if (ac > 1) {

		return true;
	}
	else
		std::cerr << "Error: bad arguments" << std::endl;
	return false;
}
