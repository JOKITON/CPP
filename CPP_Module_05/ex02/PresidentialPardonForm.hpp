/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:34:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:05:37 by jaizpuru         ###   ########.fr       */
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
