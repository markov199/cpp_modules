#include "Dummy.hpp"

Dummy::~Dummy()
{

}

Dummy::Dummy(): ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const Dummy &copy): ATarget(copy.getType())
{

}

Dummy &Dummy::operator=(const Dummy &rhs)
{

}

ATarget *Dummy::clone() const
{
	return(new Dummy());
}