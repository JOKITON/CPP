/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:30:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/02 19:17:52 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	BitcoinExchange::printDates( void ) {
	bool	flag;
	
	flag = (_dataBase["DAY"] == _dataUser["DAY"]) ? true : false;

	if (_dataBase["DAY"] > _dataUser["DAY"] && _dataBase["OLD_DAY"] < _dataBase["DAY"]) { // check if day has fallen behind
		_dataBase["DAY"] = _dataBase["OLD_DAY"];
		_dataBase["BTC_VAL"] = _dataBase["OLD_BTC_VAL"];
		flag = true; }
	
	if (flag) {
		std::cout << _dataUser["YEAR"] << "-";
			if (_dataUser["MONTH"] < 10)
				std::cout << "0";
			std::cout << _dataUser["MONTH"] << "-";
			if (_dataUser["DAY"] < 10)
				std::cout << "0";
			std::cout << _dataUser["DAY"] << " => " << _dataUser["BTC_QUANTITY"] << " = " << (_dataBase["BTC_VAL"] * _dataUser["BTC_QUANTITY"]) << std::endl;
			return 0;
	}
	else
		return 1;
}

void	BitcoinExchange::ErroneousData( int flag ) {
	if (flag == ERROR_NEGATIVE)
		std::cerr << "Error (Database) : not a positive number." << std::endl;
	else if (flag == ERROR_OVERSIZE) {
		std::cerr << "Error (Database) : too large a number." << std::endl; }
}

void	BitcoinExchange::ErroneusInput ( void ) {
	std::cerr << "Error: bad input => " << _dataUser["YEAR"] << "-" << _dataUser["MONTH"] << "-" << _dataUser["DAY"] << "-" << _dataUser["BTC_QUANTITY"] << std::endl;
}

int	BitcoinExchange::checkDataInput( void ) {
	if (_dataUser["DAY"] > static_cast<unsigned long>(31) || _dataUser["MONTH"] > static_cast<unsigned long>(12) || _dataUser["YEAR"] > static_cast<unsigned long>(2022) || _dataUser["BTC_QUANTITY"] > static_cast<unsigned long>(INT_MAX))
		return ErroneousData( ERROR_OVERSIZE), INCORRECT;
	else if (_dataUser["DAY"] < static_cast<unsigned long>(1) || _dataUser["MONTH"] < static_cast<unsigned long>(1) || _dataUser["YEAR"] < static_cast<unsigned long>(2009) || _dataUser["BTC_QUANTITY"] < static_cast<unsigned long>(0))
		return ErroneousData( ERROR_NEGATIVE), INCORRECT;
	return CORRECT;
}

int	BitcoinExchange::checkDataForm( void ) {
	if (_dataBase["DAY"] > 31 || _dataBase["MONTH"] > 12 || _dataBase["YEAR"] > 2022 || _dataBase["BTC_VAL"] > INT_MAX)
		return ErroneousData( ERROR_OVERSIZE), INCORRECT;
	else if (_dataBase["DAY"] < 1 || _dataBase["MONTH"]< 1 || _dataBase["YEAR"] < 2009 || _dataBase["BTC_VAL"] < 0)
		return ErroneousData( ERROR_NEGATIVE), INCORRECT;
	return CORRECT;
} 

int	BitcoinExchange::getDataDatabase( int	pos ) {
	
	/* Format : 2012-07-16,7.8 */
	char	temp1[5];
	_database.copy(temp1, 4, pos);
	_dataBase["YEAR"] = atof(temp1);
	pos += 5;

	char	temp2[3];
	_database.copy(temp2, 2, pos);
	_dataBase["MONTH"] = atof(temp2);
	pos += 3;

	// Change below:
	char	temp3[3];
	_database.copy(temp3, 2, pos);
	_dataBase["OLD_DAY"] = _dataBase["DAY"];
	_dataBase["DAY"] = atof(temp3);
	
	int	tempPos = pos; // Assure that _val will exist
	while (_database[tempPos] != '\0') {
		tempPos++;
		if (tempPos == (pos + 3))
			break ;
		else if (_database[tempPos] == '\0' || _database[tempPos] == '\n') {
			_dataBase["BTC_VAL"] = -1;
			return ERR_FORMAT; }
	}
	
	pos += 3;

	char	temp4[10];
	while (_database[tempPos] != '\0' &&_database[tempPos + 1] != '\0' && _database[tempPos] != '\n')
		tempPos++;
	_database.copy(temp4, tempPos - pos, pos);
	_dataBase["OLD_BTC_VAL"] = _dataBase["BTC_VAL"];
	_dataBase["BTC_VAL"] = atof(temp4);
	
	return pos;
}

int	BitcoinExchange::getDataFile( int	pos ) {
	
	/* Format : 2012-01-11 | -1 */
	char	temp1[5];
	_file.copy(temp1, 4, pos);
	_dataUser["YEAR"] = atof(temp1);
	pos += 5;

	char	temp2[3];
	_file.copy(temp2, 2, pos);
	_dataUser["MONTH"] = atof(temp2);
	pos += 3;

	char	temp3[3];
	_file.copy(temp3, 2, pos);
	_dataUser["DAY"] = atof(temp3);

	int	tempPos = pos;
	while (_file[tempPos] != '\0') {
		tempPos++;
		if (tempPos == (pos + 5))
			break ;
		else if (_file[tempPos] == '\0' || _file[tempPos] == '\n') {
			_dataUser["BTC_QUANTITY"] = -1;
			return ERR_FORMAT; }
	}

	pos += 5;
	char	temp4[10];
	while (_file[tempPos] != '\0' &&_file[tempPos + 1] != '\0' && _file[tempPos] != '\n')
		tempPos++;
	_file.copy(temp4, tempPos - pos, pos);
	_dataUser["BTC_QUANTITY"] = atof(temp4);
	
	return pos;
}

int BitcoinExchange::getDates( int pos, int flag ) {

	switch (flag) {
		case MODE_DATABASE:
			pos = getDataDatabase( pos );
			break ;
		case MODE_TEXT:
			pos = getDataFile( pos );
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
			if (j == ERR_FORMAT) {
				ErroneusInput();
				j = temp1; }
			else if (checkDataInput() == CORRECT ) {
			
				for (int i = 0; _database[i]; i++) {
					if (flag2 == 0 && _database[i] >= '0' && _database[i] <= '9') {
						temp2 = i;
						i = getDates( i, MODE_DATABASE );
						if (i == ERR_FORMAT) { 
							ErroneusInput();
							i = temp2; }

						if (checkDataForm() == INCORRECT)
							break ;
						
						if ((_dataUser["YEAR"] == _dataBase["YEAR"]) && (_dataUser["MONTH"] == _dataBase["MONTH"])) {
							if (!printDates())
								break ;
						}
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

		_dataBase["DAY"] = 0;
		_dataBase["BTC_VAL"] = 0;
		iterateDates();
		fileInput.close();
		databaseInput.close();
	}
	else
		throw (std::runtime_error("error: file could not be opened"));

}

BitcoinExchange::~BitcoinExchange( void ) {
	std::cout << "[BitcoinExchange] Default 'destructor' has been called." << std::endl;
}
