#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include"ASpell.hpp"

class Fwoosh :public ASpell
{
	~Fwoosh();
	Fwoosh();
	Fwoosh(const Fwoosh &copy);
	Fwoosh &operator=(const Fwoosh &rhs);
	ASpell *clone() const;
};

#endif