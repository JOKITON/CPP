/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:30:37 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/05 16:57:50 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	BitcoinExchange::printDates( std::map<std::string, float>& dataUser, std::map<std::string, float>& dataBase ) {
	bool	flag;
	
	flag = (dataBase["DAY"] == dataUser["DAY"]) ? true : false;

	if (dataBase["DAY"] > dataUser["DAY"] && dataBase["OLD_DAY"] < dataBase["DAY"]) { // check if day has fallen behind
		dataBase["DAY"] = dataBase["OLD_DAY"];
		dataBase["BTC_VAL"] = dataBase["OLD_BTC_VAL"];
		flag = true; }
	
	if (flag) {
		std::cout << dataUser["YEAR"] << "-";
			if (dataUser["MONTH"] < 10)
				std::cout << "0";
			std::cout << dataUser["MONTH"] << "-";
			if (dataUser["DAY"] < 10)
				std::cout << "0";
			std::cout << dataUser["DAY"] << " => " << dataUser["BTC_QUANTITY"] << " = " << (dataUser["BTC_QUANTITY"] * dataBase["BTC_VAL"]) << std::endl;
			return 0;
	}
	else
		return 1;
}

void	BitcoinExchange::ErroneousData( int flag ) {
	if (flag == ERROR_NEGATIVE)
		std::cerr << "Error (Database) : not a positive number." << std::endl;
	else if (flag == ERROR_OVERSIZE) {
		std::cerr << "Error (Database) : too large a number." << std::endl;
		}
}

void	BitcoinExchange::ErroneusInput ( std::map<std::string, float>& dataUser ) {
	std::cerr << "Error: bad input => " << dataUser["YEAR"] << "-" << dataUser["MONTH"] << "-" << dataUser["DAY"] << std::endl;
}

int	BitcoinExchange::checkDataInput( std::map<std::string, float>& dataUser ) {
	if (dataUser["DAY"] >= DAY_MAXLIMIT || dataUser["MONTH"] >= MONTH_MAXLIMIT || dataUser["YEAR"] >= YEAR_MAXLIMIT || dataUser["BTC_QUANTITY"] >= BTC_MAXLIMIT)
		return ErroneousData( ERROR_OVERSIZE), INCORRECT;
	else if (dataUser["DAY"] <= DAY_MINLIMIT || dataUser["MONTH"] <= MONTH_MINLIMIT || dataUser["YEAR"] <= YEAR_MINLIMIT || dataUser["BTC_QUANTITY"] <= BTC_MINLIMIT)
		return ErroneousData( ERROR_NEGATIVE), INCORRECT;
	return CORRECT;
}

int	BitcoinExchange::checkDataForm( std::map<std::string, float>& dataBase ) {
	if (dataBase["DAY"] > 31 || dataBase["MONTH"] > 12 || dataBase["YEAR"] > 2022 || dataBase["BTC_VAL"] > INT_MAX)
		return ErroneousData( ERROR_OVERSIZE), INCORRECT;
	else if (dataBase["DAY"] < 1 || dataBase["MONTH"]< 1 || dataBase["YEAR"] < 2009 || dataBase["BTC_VAL"] < 0)
		return ErroneousData( ERROR_NEGATIVE), INCORRECT;
	return CORRECT;
} 

int	BitcoinExchange::getDataDatabase( std::map<std::string, float>& dataBase, int	pos ) {
	
	/* Format : 2012-07-16,7.8 */
	std::string	temp1, temp2, temp3, temp4;
	temp1 = _database.substr(pos, 4);
	dataBase["YEAR"] = atof(temp1.c_str());
	pos += 5;

	temp2 = _database.substr(pos, 2);
	dataBase["MONTH"] = atof(temp2.c_str());
	pos += 3;

	temp3 = _database.substr(pos, 2);
	if (dataBase["DAY"])
		dataBase["OLD_DAY"] = dataBase["DAY"];
	dataBase["DAY"] = atof(temp3.c_str());
	
	int	tempPos = pos; // Assure that _val will exist
	while (_database[tempPos] != '\0') {
		tempPos++;
		if (tempPos == (pos + 3))
			break ;
		else if (_database[tempPos] == '\0' || _database[tempPos] == '\n') {
			dataBase["BTC_VAL"] = -1;
			return ERROR_OVERSIZE; }
	}
	
	pos += 3;

	while (_database[tempPos] != '\0' &&_database[tempPos + 1] != '\0' && _database[tempPos] != '\n')
		tempPos++;
	temp4 = _database.substr(pos, tempPos - pos);
	dataBase["OLD_BTC_VAL"] = dataBase["BTC_VAL"];
	dataBase["BTC_VAL"] = static_cast<float>(atof(temp4.c_str()));
	(void)temp1, (void)temp2, (void)temp3, (void)temp4;
	
	return pos;
}

int	BitcoinExchange::getDataFile( std::map<std::string, float>& dataUser, int	pos ) {
	
	/* Format : 2012-01-11 | -1 */
	std::string	temp1, temp2, temp3, temp4;
	int	tempPos;

	temp1 = _file.substr(pos, 4);
	dataUser["YEAR"] = atof(temp1.c_str());
	tempPos = pos;
	while (_file[tempPos] != '\0') {
		tempPos++;
		if (tempPos == (pos + 5))
			break ;
		else if (_file[tempPos] == '\0' || _file[tempPos] == '\n') {
			dataUser["MONTH"] = 0;
			return ERR_FORMAT; }
	}
	pos += 5;

	temp2 = _file.substr(pos, 2);
	dataUser["MONTH"] = atof(temp2.c_str());
	tempPos = pos;
	while (_file[tempPos] != '\0') {
		tempPos++;
		if (tempPos == (pos + 3))
			break ;
		else if (_file[tempPos] == '\0' || _file[tempPos] == '\n') {
			dataUser["DAY"] = 0;
			return ERR_FORMAT; }
	}
	pos += 3;

	temp3 = _file.substr(pos, 2);
	dataUser["DAY"] = atof(temp3.c_str());

	tempPos = pos;
	while (_file[tempPos] != '\0') {
		tempPos++;
		if (tempPos == (pos + 5))
			break ;
		else if (_file[tempPos] == '\0' || _file[tempPos] == '\n') {
			dataUser["BTC_QUANTITY"] = 0;
			return ERR_FORMAT; }
	}

	pos += 5;
	while (_file[tempPos] != '\0' && _file[tempPos] != '\n')
		tempPos++;
	temp4 = _file.substr(pos, tempPos - pos);
	dataUser["BTC_QUANTITY"] = static_cast<float>(atof(temp4.c_str()));
	(void)temp1, (void)temp2, (void)temp3, (void)temp4;
	
	return pos;
}

int BitcoinExchange::getDates( std::map<std::string, float>& dataBase, std::map<std::string, float>& dataUser, int pos, int flag ) {

	switch (flag) {
		case MODE_DATABASE:
			pos = getDataDatabase( dataBase, pos );
			break ;
		case MODE_TEXT:
			pos = getDataFile( dataUser, pos );
			break ;
	}

	return pos;
}

void	BitcoinExchange::iterateDates( std::map<std::string, float>& dataBase, std::map<std::string, float>& dataUser ) {
	int	flag1 = 0;
	int	flag2 = 0;
	int	temp1;
	int	temp2;

	for (int j = 0; _file[j]; j++) { // starts reading from text.txt
		if (flag1 == 0 && _file[j] >= '0' && _file[j] <= '9') { // tries to find numbers
			temp1 = j;
			j = getDates( dataBase, dataUser, j, MODE_TEXT );
			if (j == ERR_FORMAT) {
				ErroneusInput(dataUser);
				for (j = temp1; _file[j + 1] != '\n'; j++)
					;
			}
			else if (checkDataInput(dataUser) == CORRECT ) {
			
				for (int i = 0; _database[i]; i++) {
					if (flag2 == 0 && _database[i] >= '0' && _database[i] <= '9') {
						temp2 = i;
						i = getDates( dataBase, dataUser, i, MODE_DATABASE );
						if (i == ERR_FORMAT) { 
							ErroneusInput( dataUser );
							i = temp2; }

						if (checkDataForm( dataBase ) == INCORRECT)
							break ;
						
						if ((dataUser["YEAR"] == dataBase["YEAR"]) && (dataUser["MONTH"] == dataBase["MONTH"])) {
							if (!printDates(dataUser, dataBase))
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
	std::map<std::string, float>dataBase;
	std::map<std::string, float>dataUser;

	if (fileInput.is_open() && databaseInput.is_open()) {
		buf1 << fileInput.rdbuf();
		_file = buf1.str();
		buf2 << databaseInput.rdbuf();
		_database = buf2.str();

		dataBase["DAY"] = 0; // initialize values
		dataBase["BTC_VAL"] = 0;
		iterateDates(dataBase, dataUser);
		fileInput.close();
		databaseInput.close();
	}
	else
		throw (std::runtime_error("error: file could not be opened"));

}

BitcoinExchange::~BitcoinExchange( void ) {
	// std::cout << "[BitcoinExchange] Default 'destructor' has been called." << std::endl;
}
