/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:49:05 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/25 18:36:09 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::ErroneousData( int flag ) {
	if (flag == ERROR_NEGATIVE)
		std::cerr << "Error: not a positive number." << std::endl;
	else if (flag == ERROR_OVERSIZE) {
		std::cerr << "Error: too large a number." << std::endl; }
}

void	BitcoinExchange::ErroneusInput ( void ) {
	std::cerr << "Error: bad input => " << _yearToFind << "-" << _monthToFind << "-" << _dayToFind << std::endl;
}

int	BitcoinExchange::checkDataInput( void ) {
	if (_dayToFind > 31 || _monthToFind > 12 || _yearToFind > 2022 || _btc > INT_MAX)
		return ErroneousData( ERROR_OVERSIZE), 1;
	else if (_dayToFind < 1 || _monthToFind < 1 || _yearToFind < 2009 || _btc < 0)
		return ErroneousData( ERROR_NEGATIVE), 1;
	return 0;
}

void	BitcoinExchange::checkDataForm( void ) {
	if (_day > 31 || _month > 12 || _year > 2022 || _val > INT_MAX)
		return ErroneousData( ERROR_OVERSIZE);
	else if (_day < 1 || _month< 1 || _year < 2009 || _val < 0)
		return ErroneousData( ERROR_NEGATIVE);
} 

int	BitcoinExchange::getDatesDatabase( int pos ) {
	char *tmp = new char[20]; // Increased size to handle 4-digit year
	
	// Extract year
	_database.copy(tmp, 4, pos);
	tmp[4] = '\0'; // Null-terminate the string
	_year = atoi(tmp);
	pos += 5;

	// Extract month
	_database.copy(tmp, 2, pos);
	tmp[2] = '\0'; // Null-terminate the string
	_month = atoi(tmp);
	pos += 3;

	// Extract day
	_database.copy(tmp, 2, pos);
	tmp[2] = '\0'; // Null-terminate the string
	_day = atoi(tmp);

	int	check1 = pos; // Assure that _val will exist
	while (_database[check1++])
		if (check1 == (pos + 3))
			break ;
		else if (_database[check1] == '\n') {
			_val = -1;
			delete[] tmp;
			return -1; }
	pos += 3;

	// Extract btc val
	while (_database[check1] != '\n')
		check1++;
	_database.copy(tmp, check1 - pos, pos);
	tmp[check1 - pos] = '\0'; // Null-terminate the string
	_val = atof(tmp);

	delete[] tmp; // Don't forget to free the allocated memory

	return pos;
}

int	BitcoinExchange::getDatesFile( int pos ) {
	char *tmp = new char[20]; // Increased size to handle 4-digit year

	// Extract year
	_file.copy(tmp, 4, pos);
	tmp[4] = '\0'; // Null-terminate the string
	_yearToFind = atoi(tmp);
	pos += 5;

	// Extract month
	_file.copy(tmp, 2, pos);
	tmp[2] = '\0'; // Null-terminate the string
	_monthToFind = atoi(tmp);
	pos += 3;

	// Extract day
	_file.copy(tmp, 2, pos);
	tmp[2] = '\0'; // Null-terminate the string
	_dayToFind = atoi(tmp);

	int	check1 = pos;
	while (_file[check1++])
		if (check1 == (pos + 5))
			break ;
		else if (_file[check1] == '\n') {
			_btc = -1;
			delete[] tmp;
			return -1; }
	pos += 5;

	// Extract btc val
	while (_file[check1] != '\n')
		check1++;
	_file.copy(tmp, check1 - pos, pos);
	tmp[check1 - pos] = '\0'; // Null-terminate the string
	_btc = atof(tmp);

	delete[] tmp; // Don't forget to free the allocated memory

	return pos;
}

int BitcoinExchange::getDates( int pos, int flag ) {

	switch (flag) {
		case MODE_DATABASE:
			pos = getDatesDatabase( pos );
			break ;
		case MODE_TEXT:
			pos = getDatesFile( pos );
			break ;
	}

	return pos;
}

void	BitcoinExchange::iterateDates( void ) {
	int	flag1 = 0;
	int	flag2 = 0;
	int	temp1;
	int	temp2;

	for (int j = 0; _file[j]; j++) { // starts reading from text.txt
		if (flag1 == 0 && _file[j] >= '0' && _file[j] <= '9') { // tries to find numbers
			temp1 = j;
			j = getDates( j, MODE_TEXT );
			if (j == -1) {
				ErroneusInput();
				j = temp1; }
			else if (!checkDataInput()) {

			// std::cout << "[Extra] date: " << _yearToFind << " | " << _monthToFind << " | " << _dayToFind << "| " << _btc << std::endl; 
			
				for (int i = 0; _database[i]; i++) {
					if (flag2 == 0 && _database[i] >= '0' && _database[i] <= '9') {
						temp2 = i;
						i = getDates( i, MODE_DATABASE );
						if (i == -1) {
							ErroneusInput();
							i = temp2; }
						// std::cout << "[Extra] date: " << _year << " | " << _month << " | " << _day << "| " << _val << std::endl; 

						if ((_year == _yearToFind) && (_month == _monthToFind) && (_day == _dayToFind)) {
							// std::cout << "[Extra] date: " << _year << " | " << _month << " | " << _day << "| " << _val << std::endl; 
							std::cout << _yearToFind << "-" << _monthToFind << "-" << _dayToFind << " => " << _val << " = " << (_val * _btc) << std::endl;
							break ; }
					}
					flag2 = 1;
					if (_database[i] == '\n')
						flag2 = 0;
				
				}
			}
		}
		flag1 = 1;
		if (_file[j] == '\n')
			flag1 = 0;
	}
}

BitcoinExchange::BitcoinExchange( std::string file ) {
	std::ifstream	fileInput(file.c_str());
	std::ifstream	databaseInput("data.csv");
	std::stringstream	buf1;
	std::stringstream	buf2;

	if (fileInput.is_open() && databaseInput.is_open()) {
		buf1 << fileInput.rdbuf();
		_file = buf1.str();
		buf2 << databaseInput.rdbuf();
		_database = buf2.str();

		iterateDates();
		fileInput.close();
		databaseInput.close();
	}
	else
		throw (std::runtime_error("error: file could not be opened"));
}
