#include"Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer &copy) {}


Serializer &Serializer::operator=(const Serializer &rhs)
{

}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t *raw = reinterpret_cast <uintptr_t *>(ptr);
    return (*raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *dataptr = reinterpret_cast <Data *>(raw);
    return (dataptr);
}