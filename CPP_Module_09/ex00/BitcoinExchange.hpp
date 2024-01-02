/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:48:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/02 19:17:18 by jaizpuru         ###   ########.fr       */
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

class BitcoinExchange {
	private:
		std::string	_file;
		std::string		_database;

		std::map	<std::string, float>	_dataBase;
		std::map	<std::string, float>	_dataUser;
/* 
		int	_dayToFind;
		int	_monthToFind;
		int	_yearToFind;

		std::deque<int>	_day;
		int				_month;
		int				_year;
		std::deque<double>	_val;
		double			_btc; */
		
		// int		printDates( void );
		void	iterateDates( void );
		int		getDates( int pos, int flag );

		int		getDataDatabase( int pos );
		int		getDataFile( int pos );
		
		void	ErroneousData( int flag );
		void	ErroneusInput( void );

		int		checkDataForm( void );
		int		checkDataInput( void );

		int		printDates( void );
	
	public:
		BitcoinExchange( std::string file );
		~BitcoinExchange( void );
};

#endif
