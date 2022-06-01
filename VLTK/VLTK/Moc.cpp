#include "Moc.h"

Moc::Moc() 
{
	Ten = "Moc";
}

Moc::Moc(const Moc& other) : NguHanh(other)
{
}

Moc::~Moc()
{
}

string Moc::Sinh() const
{
	return "Hoa";
}

string Moc::Khac() const
{
	return "Tho";
}
