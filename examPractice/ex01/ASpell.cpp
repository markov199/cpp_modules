#include"ASpell.hpp"

ASpell::~ASpell()
{

}

ASpell::ASpell()
{

}

ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects)
{

}

ASpell::ASpell(const ASpell &copy)
{
	*this = copy;
}

ASpell &ASpell::operator=(const ASpell &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_effects = rhs._effects;
	}
	return *this;
}

std::string ASpell::getName() const
{
	return(_name);
}

std::string ASpell::getEffects() const
{
	return(_effects);
}

void ASpell::launch(const ATarget &target)
{
	target.getHitBySpell(*this);
}