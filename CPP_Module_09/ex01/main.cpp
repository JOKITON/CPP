/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:25 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/06 13:35:49 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **ar ) {
	if ( ac > 1) {
		std::string	inpt = ar[1];
		RPN	test1;
		test1.calc(inpt);
	}
	else {
		std::cerr << "error: not enough arguments" << std::endl;
		return FALSE; }
	return TRUE;
}
