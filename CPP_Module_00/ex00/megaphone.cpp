/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:47:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/13 14:23:58 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Check -> https://stackoverflow.com/questions/63325434/can-i-use-stdstring-argv-as-main-function-argument
//*/

void	put_str(char	*str)
{
	int	len = 0;
	while(str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
}

char	*convert_alpha(char	*str)
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

int	main(int ac, char **ar)
{
	int	len = 1;
	if (ac > 1)
	{
		while (ar[len])
			put_str(convert_alpha(ar[len++]));
	}
	else if (ac == 1)
		put_str((char *)"* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	write(1, "\n", 1);
}
