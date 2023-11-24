/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:49:05 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/24 11:52:42 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int cmpDates(const std::string &date, int pos, std::string &year, std::string &month, std::string &day, std::string &val) {
	char *tmp = new char[20]; // Increased size to handle 4-digit year

	// Extract year
	date.copy(tmp, 4, pos);
	tmp[4] = '\0'; // Null-terminate the string
	year = tmp;
	std::cout << "year : " << year << std::endl;
	pos += 5;

	// Extract month
	date.copy(tmp, 2, pos);
	tmp[2] = '\0'; // Null-terminate the string
	month = tmp;
	std::cout << "month : " << month << std::endl;
	pos += 3;

	// Extract day
	date.copy(tmp, 2, pos);
	tmp[2] = '\0'; // Null-terminate the string
	day = tmp;
	std::cout << "day : " << day << std::endl;
	int	check1 = pos;
	while (date[check1++])
		if (check1 == (pos + 5))
			break ;
		else if (date[check1] == '\n')
			throw (std::runtime_error("error: btc val is not correct!"));
	pos += 5;

	// Extract btc val
	int temp = pos;
	while (date[temp] != '\n')
		temp++;
	date.copy(tmp, temp - pos, pos);
	tmp[temp - pos] = '\0'; // Null-terminate the string
	val = tmp;
	std::cout << "val : " << val << std::endl;


	delete[] tmp; // Don't forget to free the allocated memory

	return pos;
}

void	iterateDates( const std::string & str ) {
	std::string year, month, day, val;
	int	flag = 0;

	for (int i = 0; str[i]; i++) {
		if (flag == 0 && str[i] >= '0' && str[i] <= '9') {
			i = cmpDates(str, i, year, month, day, val);
			flag = 1;
		}
		if (str[i] == '\n')
			flag = 0;
	
	}
}

void	checkInput( std::string file ) {
	std::ifstream	fileInput(file.c_str());
	std::stringstream	buf;

	if (fileInput.is_open()) {

		buf << fileInput.rdbuf();

		iterateDates(buf.str());

		fileInput.close();

	}
	else
		throw (std::runtime_error("error: file could not be opened"));
}
