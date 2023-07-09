#include<stdint.h>
#include<iostream>

struct Data
{
    int i;
    char a;
    char b;
    char c;
    char d;
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