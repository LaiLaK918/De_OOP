#include "Hoa.h"

Hoa::Hoa()
{
	Ten = "Hoa";
}

Hoa::Hoa(const Hoa& other) : NguHanh(other)
{
}

Hoa::~Hoa() 
{
}

string Hoa::Sinh() const
{
	return "Tho";
}

string Hoa::Khac() const
{
	return "Kim";
}
