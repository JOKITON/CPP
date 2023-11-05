#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define END "\033[0m"
#define WHITE "\e[4;30m"
#define BCYAN "\e[46m"

#include <iostream>
#include <typeinfo>

class Bureaucrat {
	private:
		const std::string 	_name;
		int			_grade;
		
		void	GradeTooHighException( int num );
		void	GradeTooLowException( int num );
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade);
		Bureaucrat( const Bureaucrat& p );
		virtual ~Bureaucrat( void );

		Bureaucrat& operator=( Bureaucrat& p);
		friend std::ostream& operator<<( std::ostream& out, Bureaucrat& p);
		
		std::string getName( void ) const;
		int getGrade( void );

		void	incrementGrade( void );
		void	decrementGrade( void );

};




#endif
