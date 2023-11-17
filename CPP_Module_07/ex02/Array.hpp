/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:14:13 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/18 00:55:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <ostream>

template<typename T>
class Array {
	private:
		T*		_ar;
		size_t	_size;
	public:
		Array( void ) : _ar(NULL), _size(0) {};
		~Array( void ) {
			delete[] _ar;
		}
		Array( unsigned int e ) {
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

		int	size( void ) const {
			return _size;
		}

		T*	getArray( void ) const {
			return this->_ar;
		}		
		
};

#endif
