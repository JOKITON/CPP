/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkFormat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:34:08 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/12 16:00:47 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool hasFloatFormat( const std::string& str) {
	const char	*c_str = str.c_str();
	char c = *c_str;
	while ( c ) {
		if (!isdigit(c) && (c != '.') && (c != 'f'))
			return false;
		c = *++(c_str);
	}
	return true;
}

bool hasOnlyDigits( const std::string& str ) {
	const char	*c_str = str.c_str();
	char c = *c_str;
	while ( c ) {
		if (!isdigit(c))
			return false;
		c = *++(c_str);
	}
	return true;
}

bool hasOnlyCharacters( const std::string& str) {
	const char	*c_str = str.c_str();
	char c = *c_str;
	while ( c ) {
		if (!isprint(c) && isdigit(c))
			return false;
		c = *++(c_str);
	}
	return true;
}

bool checkChar( const std::string& input ) {
	if (input.size() == 1 && isprint(input[0]) && !isdigit(input[0])) {
		// If the input represents a char literal
		return true;
	} else {
		return false;
	}
}

float floatItoa(const char *str) {
    float ret = 0.0f;
    float neg = 1.0f;
    int pos = 0;
    int intPart = 0;
    float fracPart = 0.0f;
    float fracMultiplier = 0.1f; // To accumulate the fractional part

    while (str[pos] == '-' || str[pos] == '+') {
        if (str[pos] == '-')
            neg *= -1.0f;
        pos++;
    }

    while (str[pos] && str[pos] != 'f') {
        if (str[pos] == '.') {
            pos++;
            // Collect the fractional part
            while (str[pos] && str[pos] != 'f') {
                fracPart += (str[pos] - '0') * fracMultiplier;
                fracMultiplier *= 0.1f;
                pos++;
            }
        } else {
            intPart = intPart * 10 + (str[pos] - '0'); // Accumulate the integer part
            pos++;
        }
    }

    ret = intPart + fracPart;
    return ret * neg;
}




int	intItoa( const char *str ) {
	int 	ret = 0;
	int		mult = 1;

	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mult *= -1;
		str++;
	}
	while (*str && *str != 'f') {
		if (*str == '.')
			break ;
		ret *= 10;
		ret += ((*str - '0'));
		str++;
	}

	return (ret * mult);
}
