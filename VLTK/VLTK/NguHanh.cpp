#include "NguHanh.h"

NguHanh::NguHanh()
{
	Ten = "unknown";
}

NguHanh::NguHanh(const NguHanh& other)
{
	Ten = other.Ten;
}

NguHanh::~NguHanh()
{
}

bool NguHanh::operator>(const NguHanh& other) const
{
	if (this->Khac() == other.Ten) return true;
	return false;
}

bool NguHanh::operator<(const NguHanh& other) const
{
	if (this->Sinh() == other.Ten) return true;
	return false;
}
