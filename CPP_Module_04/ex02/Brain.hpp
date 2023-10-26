/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:47:59 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/26 15:26:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
	private:
		std::string *ideas;
	public:
		Brain( void );
		virtual ~Brain( void );

		Brain(Brain& p);
		Brain&	operator=(const Brain& p);
		std::string*	getIdeas(void) const;

};

#endif
