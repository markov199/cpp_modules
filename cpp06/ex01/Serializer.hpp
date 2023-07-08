#include<stdint.h>
#include<iostream>

struct Data
{
    std::string name;
    int i;
};

class Serializer
{
    Serializer();
    ~Serializer();
    Serializer(const Serializer &copy);
    Serializer &operator=(const Serializer &rhs);
    public:
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};