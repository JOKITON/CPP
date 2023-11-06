#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150) {
	std::cout << "[Bureaucrat] Default 'constructor' has been called." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& p ) : _name(p.getName()), _grade(p._grade) {
	std::cout << "[Bureaucrat] Copy Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;

}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name) {
	int temp = grade;
	
	temp = (grade < 1) ? 0 : grade;
	temp = (grade > 150) ? 151 : temp;
	try {
		switch( temp ) {
			case 0:
				throw temp;
			case 151:
				throw temp;
			default :
				this->_grade = grade;
				std::cout << "[Bureaucrat] Contructor with (" << _name << ", " << _grade << "] has been called." << std::endl;
		}
	}
	catch ( int wrongGrade ) {
		switch ( wrongGrade ) {
			case 0:
				GradeTooHighException( grade );
				break ;
			case 151:
				GradeTooLowException( grade );
				break ;
		}
	}
	
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "[Bureaucrat] Default 'destructor' has been called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat& p) {
    std::cout << "[Bureaucrat] Assignment Operator for '" << this->_name << "' has been called." << std::endl;
if (*this != &p) {
        this->_grade = p.getGrade();
        this->_name = p.getName();
    }
return ;
}

std::ostream& operator<<( std::ostream& out, Bureaucrat& p) {
	out << "[Bureaucrat] " << p.getName() << " , bureaucrat grade " << p.getGrade() << ".\n";

	return out;
}


std::string Bureaucrat::getName( void ) const {
	return this->_name;
}

int	Bureaucrat::getGrade( void ) {
	return _grade;
}

void	Bureaucrat::incrementGrade( void ) {
	try {
		switch(this->_grade) {
			case 1:
				throw 1;
			case -1:
				throw -1;
			default:
				this->_grade--;
		}
	}
	catch( int grade ) {
		std::cout << "[Bureaucrat] error: 'incrementGrade()' for '" << this->_name << "' has failed ... Current grade : [" << this->_grade << "]." << std::endl;
		return ;
	}
	std::cout << "[Bureaucrat] 'incrementGrade()' for '" << this->_name << "' has been called.  Current grade : [" << this->_grade << "]." << std::endl;
}

void	Bureaucrat::decrementGrade( void ) {
	try {
		switch(this->_grade) {
			case 150:
				throw 150;
			case -1:
				throw -1;
			default:
				this->_grade++;
		}
	}
	catch( int grade ) {
		std::cout << "[Bureaucrat] error: 'decrementGrade()' for '" << this->_name << "' has failed ... Current grade : [" << this->_grade << "]." << std::endl;
		return ;
	}
	std::cout << "[Bureaucrat] 'decrementGrade()' for '" << this->_name << "' has been called.   Current grade : [" << this->_grade << "]." << std::endl;
}

void	Bureaucrat::GradeTooHighException( int num ) {
	this->_grade = -1;
	std::cout << "[Bureaucrat] error: Constructor provided with (" << _name << ", " << num << "] was too high! 'GradeTooHighException' " << std::endl;
}

void	Bureaucrat::GradeTooLowException( int num ) {
	this->_grade = -1;
	std::cout << "[Bureaucrat] error: Constructor provided with (" << _name << ", " << num << "] was too low! 'GradeTooLowException' " << std::endl;
}
