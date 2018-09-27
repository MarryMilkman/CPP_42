#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150), _name("none")
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _grade(grade), _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		this->_grade = 1;
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref)
{
	*this = ref;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	& Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->_grade = ref._grade;
	return (*this);
}

void			Bureaucrat::incGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void			Bureaucrat::decGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

//////////////////// GETTER

int				Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}


std::ostream	& operator<<(std::ostream & o, Bureaucrat const & ref)
{
	o << "<" << ref.getName() << ">, bureaucrat grade <" << ref.getGrade() << ">";
	return (o);
}

// Exception

	// GradeTooHighException
Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & ref) throw()
{
	*this = ref;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too hight grade for this bureaucrat");
}

Bureaucrat::GradeTooHighException	& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & ref) throw()
{
	static_cast<void>(ref);
	return (*this);
}

	// GradeTooLowException
Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & ref) throw()
{
	*this = ref;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade for this bureaucrat");
}

Bureaucrat::GradeTooLowException	& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & ref) throw()
{
	static_cast<void>(ref);
	return (*this);
}
