#include "Bureaucrat.hpp"

void	execConstructors( void ) {

	Bureaucrat Jokin;


	Bureaucrat Miguel("Miguel", 2);

	std::cout << "The name of Bureaucrat 'Miguel' :" << Miguel.getName() << std::endl;
}

int main( void ) {

	/* My own tests */
	execConstructors();

	return 0;
}
