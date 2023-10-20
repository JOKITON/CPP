/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:38:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:55:24 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*slots[4];
	public:
		MateriaSource( void );
		~MateriaSource( void );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
