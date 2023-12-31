/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:34:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/10 12:40:53 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:

	public:
		/* Constructors */
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( const PresidentialPardonForm & p );
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& p );
		/* Inherited */
		void	execute( Bureaucrat const & executor ) const;

};

#endif
