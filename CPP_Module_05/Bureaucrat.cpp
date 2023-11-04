#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150) {
	std::cout << "[Bureaucrat] Default 'constructor' has been called." << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade) {
	std::cout << "[Bureaucrat] Contructor with (" << name << ") and [" << grade << "] has been called." << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "[Bureaucrat] Default 'destructor' has been called." << std::endl;
}

std::string Bureaucrat::getName( void ) const {
	return this->_name;
}

int	Bureaucrat::getGrade( void ) {
	return _grade;
}

void	Bureaucrat::incrementGrade( void ) {
	std::cout << "[Bureaucrat] 'incrementGrade()' has been called." << std::endl;
	switch(this->_grade) {
		case 150:
		      break ;
		case 1:
		      break ;
		default:
		      this->_grade--;
	}
}

void	Bureaucrat::decrementGrade( void ) {
	std::cout << "[Bureaucrat] 'decrementGrade()' has been called." << std::endl;

	switch (this->_grade) {
		case 1:
		      break ;
		case 150:
		      break ;
		default:
		      this->_grade++;
	}
}


