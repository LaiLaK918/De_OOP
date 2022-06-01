#pragma once
#include <string>
#include <iostream>
using namespace std;

class NguHanh
{
protected:
	string Ten;
public:
	NguHanh();
	NguHanh(const NguHanh& other);
	virtual ~NguHanh();
	virtual string Sinh() const = 0;
	virtual string Khac() const = 0;
	bool operator > (const NguHanh& other) const;
	bool operator < (const NguHanh& other) const;
};

