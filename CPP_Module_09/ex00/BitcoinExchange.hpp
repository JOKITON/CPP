/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:48:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/25 18:30:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
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

class BitcoinExchange {
	private:
		std::string	_file;
		int	_dayToFind;
		int	_monthToFind;
		int	_yearToFind;

		std::string	_database;
		int	_day;
		int	_month;
		int	_year;
		double	_val;
		double	_btc;
		
		void	iterateDates( void );
		int		getDatesDatabase( int pos );
		int		getDatesFile( int pos );
		int		getDates( int pos, int flag );
		void	ErroneousData( int flag );
		void	ErroneusInput( void );
		void	checkDataForm( void );
		int		checkDataInput( void );
	public:
		BitcoinExchange( std::string file );
};

void	checkInput( std::string file );

#endif
