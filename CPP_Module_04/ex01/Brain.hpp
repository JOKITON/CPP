/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:47:59 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/25 19:58:50 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
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
