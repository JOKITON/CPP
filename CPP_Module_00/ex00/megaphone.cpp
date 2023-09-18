/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:47:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/18 17:04:24 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* Can I have as input argument a std::string instead of a char**?

TODO: Check -> https://stackoverflow.com/questions/63325434/can-i-use-stdstring-argv-as-main-function-argument

* 1. main argument must be char** argv or char* argv[]
* 2. You can assign it to a variable, like this: 
 if(argc > 1)
    { 
        std::string str = argv[1]; 
    }
* 3. There is also the possibility to construct the string using `parameter constructor´:
	std::string str(ar[1]); //(always that ar[1] exists, check)

 * 4. There is also a method to use a initializer list (C++11)
*/

/**
 * @brief
 * * Writes to standard output all the characters inside the string, until end(NULL).
 * @param str 
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
 * convertAlpha
 * 
 *
 * @brief 
 * * Converts all the lower case characters inside a string to capital letters.
 * @param str 
 * @return char* 
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
 * @brief 
 * * 1: In first condition, if more than one argument is given, we use putStr along with convertAlpha function.
 * * 2: In second condition, if there is only one argument, we print to standard output a default string.
 * @param ac 
 * @param ar 
 * @return int 
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
