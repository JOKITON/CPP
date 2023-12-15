/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:51:15 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/13 16:03:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		
	public:
		/* Constructors */
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm & p );
		RobotomyRequestForm( std::string const & target );
		RobotomyRequestForm&	operator=( const RobotomyRequestForm& p );
		/* Inherited */
		void	execute( Bureaucrat const & executor ) const;
};

#endif
