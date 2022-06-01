#include "Thuy.h"

Thuy::Thuy()
{
	Ten = "Thuy";
}

Thuy::Thuy(const Thuy& other) : NguHanh(other)
{
}

Thuy::~Thuy()
{
}

string Thuy::Sinh() const
{
	return "Moc";
}

string Thuy::Khac() const
{
	return "Hoa";
}
