#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string 	_name;
		int			_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade);
		virtual ~Bureaucrat( void );	
		
		std::string getName( void ) const;
		int getGrade( void );

		void	incrementGrade( void );
		void	decrementGrade( void );

};




#endif
