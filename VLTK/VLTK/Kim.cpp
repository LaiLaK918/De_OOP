#include "Kim.h"

Kim::Kim()
{
	Ten = "Kim";
}

Kim::Kim(const Kim& other) : NguHanh(other)
{
}

Kim::~Kim()
{
}

string Kim::Sinh() const
{
	return "Thuy";
}

string Kim::Khac() const
{
	return "Moc";
}
