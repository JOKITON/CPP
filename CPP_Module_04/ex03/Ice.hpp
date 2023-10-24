/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:47:58 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:55:01 by jaizpuru         ###   ########.fr       */
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
                Ice( Ice& p );
                Ice& operator=( Cure& p );
	
		Ice* clone() const;
		void	use(ICharacter& p);
		std::string const & getType( void ) const;
};



#endif
