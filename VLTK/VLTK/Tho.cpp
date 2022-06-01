#include "Tho.h"

Tho::Tho() 
{
    Ten = "Tho";
}

Tho::Tho(const Tho& other) : NguHanh(other)
{
}

Tho::~Tho()
{
}

string Tho::Sinh() const
{
    return "Kim";
}

string Tho::Khac() const
{
    return "Thuy";
}
