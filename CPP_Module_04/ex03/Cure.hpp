/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:53:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/25 16:45:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {
	private:
		std::string type;
	public:
		Cure( void );
        Cure( const Cure& p );
        Cure& operator=( const Cure& p );
		~Cure( void );

		void	use(ICharacter& p);
		Cure*	clone( void ) const;
		std::string const & getType( void ) const;
};

#endif
