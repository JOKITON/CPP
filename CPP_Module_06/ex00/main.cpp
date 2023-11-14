/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:41:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/13 21:26:49 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main( int ac, char **ar ) {

	if (ac == 2) {
		/* ScalarConverter tests */
		ScalarConverter::convert(ar[1]);

	}
	else
		std::cerr << "[You did not provide sufficient arguments!] :\n	Usage: [./executable {argument} ]" << std::endl;
}