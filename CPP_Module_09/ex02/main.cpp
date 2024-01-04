/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:21:45 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/04 14:50:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int	main( int ac, char **ar ) {
	if (ac > 1) {
		PmergeMe	test1;
		
		test1.sort(ar);

		return 0;
	}
	else
		std::cerr << "Error: bad arguments" << std::endl;
	return 1;
}
