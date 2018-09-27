#include "Squad.hpp"

Squad::Squad()
{
	this->_squad = 0;
}

Squad::Squad(Squad const & ref)
{
	*this = ref;
}

Squad::~Squad()
{
	this->_del_t_squad();
}

int		Squad::getCount() const
{
	int		count;
	t_squad	*s_squad;

	count = 0;
	s_squad = this->_squad;
	while (s_squad)
	{
		count++;
		s_squad = s_squad->next;
	}
	return (count);
}

ISpaceMarine	*Squad::getUnit(int nbr) const
{
	int		count;
	t_squad	*s_squad;

	count = 0;
	s_squad = this->_squad;
	while (nbr != count && s_squad)
	{
		count++;
		s_squad = s_squad->next;
	}
	if (!s_squad)
		return (0);
	return (s_squad->unit);
}

int				Squad::push(ISpaceMarine *marine)
{
	int		count;
	t_squad	*s_squad;

	count = 0;
	if (!(s_squad = this->_squad))
		this->_squad = this->_create_t_squad(marine);
	else
	{
		while (++count && s_squad->next)
			s_squad = s_squad->next;
		s_squad->next = this->_create_t_squad(marine);
	}
	return (count);
}

t_squad			*Squad::get_squad() const
{
	return (this->_squad);
}

// Private function

t_squad			*Squad::_create_t_squad(ISpaceMarine *marine)
{
	t_squad	*new_squad;

	new_squad = new t_squad;
	new_squad->unit = marine;
	new_squad->next = 0;
	return (new_squad);
}

void			Squad::_del_t_squad()
{
	t_squad		*del_squad;
	t_squad		*s_squad;

	s_squad = this->_squad;
	while ((del_squad = s_squad))
	{
		s_squad = s_squad->next;
		delete del_squad->unit;
		delete del_squad;
	}
	this->_squad = 0;
}

// Operator

Squad			& Squad::operator=(Squad const & ref)
{
	this->_del_t_squad();
	this->_squad = ref.get_squad();
	return (*this);
}