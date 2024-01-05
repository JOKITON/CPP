/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:48:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/05 12:47:19 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <deque>
#include <map>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <limits.h>

#define ERROR_NEGATIVE 101
#define ERROR_OVERSIZE 102
#define ERROR_YEAR 103
#define ERROR_VAL 104
#define ERROR_CV_VAL 105

#define MODE_TEXT 201
#define MODE_DATABASE 202

#define ERR_FORMAT 301

#define CORRECT 0
#define INCORRECT 1

#define DAY_MAXLIMIT 32.0f
#define MONTH_MAXLIMIT 13.0f
#define YEAR_MAXLIMIT 2023.0f
#define BTC_MAXLIMIT 1001.0f

#define DAY_MINLIMIT 0.0f
#define MONTH_MINLIMIT 0.0f
#define YEAR_MINLIMIT 2008.0f
#define BTC_MINLIMIT -1.0f

class BitcoinExchange {
	private:
		std::string	_file;
		std::string		_database;
		
		// int		printDates( void );
		void	iterateDates( std::map<std::string, float>& dataBase, std::map<std::string, float>& dataUser );
		int		getDates( std::map<std::string, float>& dataBase, std::map<std::string, float>& dataUser, int pos, int flag );

		int		getDataDatabase( std::map<std::string, float>& dataBase, int	pos );
		int		getDataFile( std::map<std::string, float>& dataUser, int	pos );
		
		void	ErroneousData( int flag );
		void	ErroneusInput( std::map<std::string, float>& dataUser );

		int		checkDataForm( std::map<std::string, float>& dataBase );
		int		checkDataInput( std::map<std::string, float>& dataUser );

		int		printDates( std::map<std::string, float>& dataUser, std::map<std::string, float>& dataBase );
	
	public:
		BitcoinExchange( std::string file );
		~BitcoinExchange( void );
};

#endif
