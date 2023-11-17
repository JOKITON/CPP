/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:56:45 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 11:42:11 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : _str("Buenas tardes amigis!"), _numb(69) {
	std::cout << "[Data] Default constructor called." << std::endl;
}
Data::Data( const std::string& str, int numb) : _str(str), _numb(numb) {
	std::cout << "[Data] Constructor with data {" << _str << ", " << _numb << "} has been called" << std::endl;
}

Data::Data( const Data& p ) : _str(p.getStr()), _numb(p.getInt()) {
	std::cout << "[Data] Copy constructor has been called." << std::endl;
	std::cout << "[Data] Let's check if they have the same adresses for the same objects :" << std::endl;

	std::cout << "[Data] Adress of _str : " << &(_str) << std::endl;
	std::cout << "[Data] Adress of p.getStr() : " << &(p.getStr()) << std::endl;
}

Data&	Data::operator=( const Data& p ) {
	std::cout << "[Data] Assignment Overload Operator called from '" << p.getStr() << "'." << std::endl;
	if (this != &p) {
		this->_str = (p.getStr());
		this->_numb = p.getInt();
		
		std::cout << "[Data] Adress of _str : " << &(_str) << std::endl;
		std::cout << "[Data] Adress of p.getStr() : " << &(p.getStr()) << std::endl;
	}
	return *this;
}

std::ostream&	operator<<( std::ostream& os, const Data& p ) {
	os << "[Data] { _str = '" << p.getStr() << "', _numb = '" << p.getInt()  << "' }." << std::endl;
	return os;
}

Data::~Data( void ) {
	std::cout << "[Data] Default destructor called." << std::endl;
}

const std::string& 	Data::getStr( void ) const {
	return this->_str;
}

int				Data::getInt( void ) const {
	return this->_numb;
}
