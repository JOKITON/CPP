/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:53:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/17 18:08:04 by jaizpuru         ###   ########.fr       */
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
  Cure( Cure& p );
		~Cure( void );
  Cure& operator=( Cure& p );

		void	use(ICharacter& p);
		Cure*	clone( void ) const;
		std::string const & getType( void ) const;
};

#endif
