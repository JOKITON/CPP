/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:54:08 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/08 21:06:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "_default", FALSE, 145, 137 ) {
	std::cout << "[ShrubberyCreationForm] '" << "_default" << "' has been constructed." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "[ShrubberyCreationForm] '" << getName() << "' has been destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) : AForm(target, FALSE, 145, 137) {
	std::cout << "[ShrubberyCreationForm] '" << target << "' has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm & p ) : AForm( p.getName(), p.getStatus(), 145, 137) {
	std::cout << "[RobotomyRequestForm] '" << this->getName() << "' has been constructed." << std::endl;
}

void	ShrubberyCreationForm::buildAsciiTree( void ) const {
	std::string		appendStr = this->getName();
	appendStr.append("_shrubbery");
	std::ofstream outfile (appendStr.c_str());


	outfile << std::endl <<
	"       >x<        " << "        >x<       " << "       >x<        " << "        >x<       \n" << 
	"      .***.       " << "       .***.      " << "      .***.       " << "       .***.      \n" << 
	"     .o*.**.      " << "      .o*.**.     " << "     .o*.**.      " << "      .o*.**.    \n"  <<
	"    .****o**.     " << "     .****o**.    " << "    .****o**.     " << "     .****o**.    \n" <<
	"   .o********.    " << "    .o********.   " << "   .o********.    " << "    .o********.   \n" <<
	"  .********.**.   " << "   .********.**.  " << "  .********.**.   " << "   .********.**.  \n" <<
	" .****.*****o**.  " << "  .****.*****o**. " << " .****.*****o**.  " << "  .****.*****o**. \n" <<
	".****o**********. " << " .****o**********." << ".****o**********. " << " .****o**********.\n" <<
	"        ||        " << "         ||       " << "        ||        " << "         ||      \n"  <<
	"        ||        " << "         ||       " << "        ||        " << "         ||      \n"  <<
	std::endl;
	
	outfile.close();
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	int check1;

	check1 = ( this->getGradeExec() >= executor.getGrade()) ? 1 : 0;
	switch (check1) {
		case 1:
			check1 = (this->getStatus()) ? 1 : -1;
	}
	switch ( check1 ) {
		case -1:
			throw (AForm::NonSignedFormException());
			break ;
		case 0:
			throw (AForm::GradeTooLowException());
			break ;
		case 1:
			buildAsciiTree();
			std::cout << "[ShrubberyCreationForm] '" << this->getName() << "' has created a file named '" << this->getName() << "_shrubbery', go check it out! " << std::endl;
			break ;

	}
}