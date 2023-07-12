#include"Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast <uintptr_t >(ptr);
    return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return ( reinterpret_cast <Data *>(raw));
}