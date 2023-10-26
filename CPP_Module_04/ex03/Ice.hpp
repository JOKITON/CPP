/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:47:58 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/25 16:46:09 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {
	private:
		std::string type;
	public:
		Ice( void );
		~Ice( void );
        Ice( const Ice& p );
        Ice& operator=( const Ice& p );
	
		Ice* clone() const;
		void	use(ICharacter& p);
		std::string const & getType( void ) const;
};



#endif
