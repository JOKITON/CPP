/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:47:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/19 10:46:04 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes all characters in the string to standard output until the null terminator.
 * 
 * @param str The input string
 */
void	putStr(char	*str)
{
	int	len = 0;
	while(str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
}

/**
 * @brief Converts all lowercase characters in a string to uppercase.
 * 
 * @param str The input string
 * @return char* The modified string
 */
char	*convertAlpha(char	*str)
{
	int	len = 0;
	while (str[len])
	{
		if (str[len] >= 97 && str[len] <= 122)
			str[len] -= 32;
		len++;
	}
	return (str);
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
			putStr(convertAlpha(ar[len++]));
	}
	else if (ac == 1)
		putStr((char *)"* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	write(1, "\n", 1);
}
