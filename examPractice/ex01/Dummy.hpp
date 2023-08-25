#ifndef DUMMY_HPP
#define DUMMY_HPP
#include"ATarget.hpp"

class Dummy :public ATarget
{
	~Dummy();
	Dummy();
	Dummy(const Dummy &copy);
	Dummy &operator=(const Dummy &rhs);
	ATarget *clone() const;
};

#endif