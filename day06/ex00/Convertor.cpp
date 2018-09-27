#include "Convertor.hpp"

Convertor::Convertor() :
		_int(0), _char(0), _double(0.0), _float(0.0f)
{
}

Convertor::Convertor(Convertor const &ref)
{
	*this = ref;
}

Convertor::Convertor(char *str) :
		_int(0), _char(0), _double(0.0), _float(0.0f)
{
	std::string box = str;

	this->convert((box));
}

Convertor::~Convertor()
{
}

void		Convertor::convert(std::string str)
{
	this->_int = std::atoi(str.c_str());
	this->_float = std::atof(str.c_str());
	if (this->_int >= 0 && this->_int <= 127)
		this->_char = std::atoi(str.c_str());
	else
		this->_char = -1;
	try
	{
		this->_double = std::stod(str.c_str());
	}
	catch (std::exception c)
	{
		std::cout << " ad double\n";
	}
/**/}

void		Convertor::display()
{
	std::cout << "int: " << this->_int << std::endl
		<< "char: " << this->_char << std::endl
		<< "float: " << this->_float << std::endl
		<< "double: " << this->_double << std::endl;
}


////		Getter

int		Convertor::getInt() const 
{
	return (this->_int);
}
char	Convertor::getChar() const
{
	return (this->_char);
}
double	Convertor::getDouble() const
{
	return (this->_double);
}
float	Convertor::getFloat() const
{
	return (this->_float);
}


Convertor	& Convertor::operator=(Convertor const & ref)
{
	this->_int = ref.getInt();
	this->_char = ref.getChar();
	this->_double = ref._double;
	this->_float = ref.getFloat();
	return (*this);
}