/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:54:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:04:02 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:

	public:
		/* Constructors */
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string const & target );
		ShrubberyCreationForm( const ShrubberyCreationForm & p );
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& p );
		void	buildAsciiTree( void ) const;
		/* Inherited */
		void	execute( Bureaucrat const & executor ) const;

};

#endif
