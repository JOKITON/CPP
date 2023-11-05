#include "Bureaucrat.hpp"

void	execConstructors( void ) {

	std::cout << BCYAN << WHITE << "-----------------------[StartTests]-----------------------" << END << std::endl;

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[DefaultConstructor]-----------------------" << END << std::endl;

	Bureaucrat	test1;

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[DataConstructor]-----------------------" << END << std::endl;
	Bureaucrat Top("Top", 2);
	Bureaucrat Bottom("Bottom", 149);
	Bureaucrat test2("test2", 1321);
	Bureaucrat test3("test3", -432);

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[CopyConstructor]-----------------------" << END << std::endl;

	Bureaucrat test4( test2 );

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[getName]-----------------------" << END << std::endl;
	
	std::cout << "Data of Bureaucrat 'Top' : [" << Top.getName() << " | " << Top.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'Bottom' : [" << Bottom.getName() << " | " << Bottom.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test1' : [" << test1.getName() << " | " << test1.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test2' : [" << test2.getName() << " | " << test2.getGrade() << "]" << std::endl;
	std::cout << "Data of Bureaucrat 'test3' : [" << test3.getName() << " | " << test3.getGrade() << "]" <<std::endl;
	std::cout << "Data of Bureaucrat 'test4' : [" << test4.getName() << " | " << test4.getGrade() << "]" << std::endl;


	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[IncrementGrade]-----------------------" << END << std::endl;

	std::cout << std::endl;
	Top.incrementGrade();
	Top.incrementGrade(); // error-case
	Top.incrementGrade();

	std::cout << std::endl;
	Bottom.incrementGrade();

	std::cout << std::endl;
	test2.incrementGrade(); // error-case
	test2.incrementGrade();

	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[DecrementGrade]-----------------------" << END << std::endl;

	std::cout << std::endl;
	Top.decrementGrade();
	Top.decrementGrade();

	std::cout << std::endl;
	Bottom.decrementGrade();
	Bottom.decrementGrade();
	Bottom.decrementGrade(); // error-case

	std::cout << std::endl;
	test2.decrementGrade(); // error-case
	test2.decrementGrade();


	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[OverloadOperator]-----------------------" << END << std::endl;

	std::cout << Top;
	std::cout << Bottom;
	std::cout << test1;
	std::cout << test2;


	std::cout << std::endl;
	std::cout << BCYAN << WHITE << "-----------------------[Destructors]-----------------------" << END << std::endl;


}

int main( void ) {

	/* My own tests */
	execConstructors();

	return 0;
}
