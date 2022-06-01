#pragma once
#include "NguHanh.h"
class Kim :
    public NguHanh
{
public:
    Kim();
    Kim(const Kim& other);
    ~Kim();
    string Sinh() const;
    string Khac() const;
};

