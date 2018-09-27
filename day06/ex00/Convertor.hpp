#ifndef  CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>

class Convertor
{
public:
	Convertor();
	Convertor(char *str);
	Convertor(Convertor const & ref);
	~Convertor();

	void	convert(std::string str);
	void	display();
	int		getInt() const;
	char	getChar() const;
	double	getDouble() const;
	float	getFloat() const;

	Convertor	& operator=(Convertor const & ref);

private:
	int		_int;
	char	_char;
	double	_double;
	float	_float;
};

#endif