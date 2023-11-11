/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:51:15 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/11 17:26:02 by jaizpuru         ###   ########.fr       */
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
		RobotomyRequestForm( RobotomyRequestForm & p );
		RobotomyRequestForm( std::string const & target );
		/* Inherited */
		void	execute( Bureaucrat const & executor ) const;
};

#endif
