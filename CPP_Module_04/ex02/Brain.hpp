/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:47:59 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/20 18:19:00 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string *ideas;
	public:
		Brain( void );
		virtual ~Brain( void );

		Brain(Brain& p);
		Brain&	operator=(const Brain& p);
		std::string*	getIdeas(void);

};

#endif
