#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

typedef	struct		s_squad
{
	ISpaceMarine	*unit;
	struct s_squad	*next;
}					t_squad;

class Squad : public ISquad
{
public:
	Squad();
	Squad(Squad const & ref);
	~Squad();

	virtual int				getCount() const;
	virtual ISpaceMarine	*getUnit(int nbr) const;
	virtual int				push(ISpaceMarine *marine);

	t_squad					*get_squad() const;

	Squad					& operator=(Squad const & ref);
private:
	t_squad					*_squad;

	void					_del_t_squad();
	t_squad					*_create_t_squad(ISpaceMarine *marine);
};

#endif