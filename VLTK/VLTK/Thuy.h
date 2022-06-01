#pragma once
#include "NguHanh.h"
class Thuy :
    public NguHanh
{
public:
    Thuy();
    Thuy(const Thuy& other);
    ~Thuy();
    string Sinh() const;
    string Khac() const;
};

