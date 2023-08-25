#include"Fwoosh.hpp"
#include"ASpell.hpp"


Fwoosh::~Fwoosh()
{

}

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(const Fwoosh &copy)
{
	*this = copy;
}

Fwoosh &Fwoosh::operator=(const Fwoosh &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_effects = rhs._effects;
	}
	return (*this);
}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}