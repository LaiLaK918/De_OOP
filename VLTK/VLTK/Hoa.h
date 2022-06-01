#pragma once
#include "NguHanh.h"
class Hoa :
    public NguHanh
{
public:
    Hoa();
    Hoa(const Hoa& other);
    ~Hoa();
    string Sinh() const;
    string Khac() const;
};

