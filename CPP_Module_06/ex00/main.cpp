/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:41:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/12 15:37:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	execConverters( char *str ) {
	ScalarConverter test1;

	test1.convert(str);
}

int main( int ac, char **ar ) {

	if (ac == 2) {
		/* ScalarConverter tests */
		execConverters(ar[1]);

	}
	else
		std::cerr << "[You did not provide sufficient arguments!] :\n	Usage: [./executable {argument} ]" << std::endl;
}