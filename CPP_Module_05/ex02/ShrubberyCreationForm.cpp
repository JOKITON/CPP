/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:54:08 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 14:40:43 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "_defaultShrubberyCreationForm", FALSE, 145, 137 ) {
	std::cout << "[ShrubberyCreationForm] '" << "_default" << "' has been constructed." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "[ShrubberyCreationForm] '" << getName() << "' has been destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) : AForm(target, FALSE, 145, 137) {
	std::cout << "[ShrubberyCreationForm] '" << target << "' has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & p ) : AForm( p.getName(), p.getStatus(), 145, 137) {
	std::cout << "[ShrubberyCreationForm] '" << this->getName() << "' has been constructed from '" << p.getName() << "'." << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& p ) {
	std::cout << "(warning: name, execution & sign grades cannot be coppied due to 'const' prefix)" << std::endl;
	if (this != &p) {
		this->setSign(p.getStatus());
	}
	std::cout << "[ShrubberyCreationForm] A copy of '" << this->getName() << "' has been assigned by '" << p.getName() << "'." << std::endl;
	return *this;
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
