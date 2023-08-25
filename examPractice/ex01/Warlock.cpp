#include"Warlock.hpp"


Warlock::Warlock():_name(), _title()
{

}

Warlock::Warlock(const Warlock &copy)
{
	*this = copy;
}

Warlock &Warlock::operator=(const Warlock &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(std::string name, std::string title):_name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string Warlock::getName() const
{
	return (this->_name);
}
const std::string Warlock::getTitle() const
{
	return (this->_title);
}
void Warlock::setTitle(std::string title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	_mySpells[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell *>::iterator it;
	
	it = _mySpells.find(spellName);

	if (it != _mySpells.end())
		_mySpells.erase(spellName);
}

void Warlock::launchSpell(std::string spellName, const ATarget &theTarget)
{
	
}