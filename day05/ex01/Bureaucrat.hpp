#ifndef  BUREAUCRAT_HPP
#define BUREAUCRAT_HPP value

#include <iostream>
#include <exception>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & dset);
	~Bureaucrat();
	
	class GradeTooHighException : public std::exception 
	{
	public:
		GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const & ref) throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();

		GradeTooHighException	& operator=(GradeTooHighException const & ret) throw();
	};
	class GradeTooLowException : public std::exception 
	{
	public:
		GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const & ref) throw();
		~GradeTooLowException() throw();
		virtual const char* what() const throw();

		GradeTooLowException	& operator=(GradeTooLowException const & ret) throw();
	};

	void				incGrade();
	void				decGrade();

	int					getGrade() const;
	std::string			getName() const;

	Bureaucrat	& operator=(Bureaucrat const &ref);

private:
	int					_grade;
	std::string const	_name;
};

std::ostream	& operator<<(std::ostream & o, Bureaucrat const & ref);
#endif