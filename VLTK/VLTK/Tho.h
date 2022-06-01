#pragma once
#include "NguHanh.h"
class Tho :
    public NguHanh
{
public:
    Tho();
    Tho(const Tho& other);
    ~Tho();
    string Sinh() const;
    string Khac() const;
};

