#include"ATarget.hpp"

ATarget::~ATarget()
{

}

ATarget::ATarget():_type()
{

}

ATarget::ATarget(std::string type):_type(type)
{

}

ATarget::ATarget(const ATarget &copy)
{
	this->_type = copy._type;

}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string ATarget::getType() const
{
	return(_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << std::endl;
}

