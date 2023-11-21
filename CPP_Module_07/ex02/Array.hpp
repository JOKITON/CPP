/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:14:13 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/21 12:43:43 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <ostream>
#include <sstream>
#include <math.h>

template<typename T>
class Array {
	private:
		T*		_ar;
		int		_size;
	public:
		Array( void ) : _ar(NULL), _size(0) {
			std::cout << "[Array] Empty Array has been created." << std::endl;
		};
		~Array( void ) {
			delete[] _ar;
		}
		Array( unsigned int e ) {
			std::cout << "[Array] Array was created using " << e << std::endl;
			_ar = new T[e]();
			_size = e;
		}
		Array( const Array& p) {
			_ar = new T[p.size()](); // allocates new space for array
			_size = p.size();
			std::copy(p._ar, p._ar + p.size(), _ar); // copies all the data inside 'p' for array
		};

		Array& operator=( const Array& p ) {
			if (this != &p) {
				delete []_ar;
				_ar = new T[p.size()]();
				std::copy(p._ar, p._ar + p.size(), _ar);
			}
			return *this;
		}

		T&	operator[]( int index ) {
			if (index > -1 && index < _size)
				return this->_ar[index];
			else {
				std::ostringstream	oss;
				oss << "[Array] error: string not found at " << index;
				std::string msg = oss.str();
				throw(std::runtime_error(msg));
			}
		}

		int	size( void ) const {
			return _size;
		}

		T*	getArray( void ) const {
			return this->_ar;
		}		
		
};

#endif
