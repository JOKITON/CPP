/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:47:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/19 18:26:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * @brief Converts all lowercase characters in a std::string to uppercase.
 * 
 * @param str The input string in std::string format.
 */
void	convertAlpha(const std::string arg)
{
	std::string	prt;
	int			len;
	const	std::locale loc;

	len = arg.length();
	prt.reserve(len);
	for (int i = 0; i < len; i++) {
		prt += std::toupper(arg[i], loc);
	}
	std::cout << prt;
}

/**
 * @brief Main function that processes command line arguments.
 * 
 * @param argc Number of command line arguments
 * @param argv Array of command line arguments
 * @return int Program exit code
 */
int	main(int ac, char **ar)
{
	int	len = 1;
	if (ac > 1)
	{
		while (ar[len])
			convertAlpha(ar[len++]);
	}
	else if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
