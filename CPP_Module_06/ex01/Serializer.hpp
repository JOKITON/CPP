/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:00:19 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 15:07:38 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// Define uintptr_t manually if it's not available
#ifdef _WIN32
typedef size_t uintptr_t;
#else
#include <stdint.h>
#endif

#include <iostream>
#include "Data.hpp"

class Serializer {
	private:

		Serializer( void );
	public:
		~Serializer( void );
		Serializer( const Serializer& p );
		Serializer& operator=( const Serializer& p );

		static uintptr_t	serialize( Data*	ptr );
		static Data*		deserialize( uintptr_t	raw );



};

#endif
