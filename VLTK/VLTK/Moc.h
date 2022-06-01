#pragma once
#include "NguHanh.h"
class Moc :
    public NguHanh
{
public:
    Moc();
    Moc(const Moc& other);
    ~Moc();
    string Sinh() const;
    string Khac() const;
};

