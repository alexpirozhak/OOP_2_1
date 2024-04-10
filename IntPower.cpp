//
// Created by Max on 13.03.2024.
//

#include "IntPower.h"

IntPower::IntPower() : IntPower(1.0, 0)
{}

IntPower::IntPower(double first, int second) : first(first), second(second)
{
    if (first == 0.0)
        first = 1.0;
}

IntPower::IntPower(double first) : IntPower(first, 0)
{}

IntPower::IntPower(const IntPower &intPower)
        : first(intPower.first), second(intPower.second)
{}

double IntPower::getFirst() const
{
    return first;
}

void IntPower::setFirst(double first)
{
    if (first != 0.0)
        this->first = first;
}

int IntPower::getSecond() const
{
    return second;
}

void IntPower::setSecond(int second)
{
    this->second = second;
}

double IntPower::power() const
{
    double res = 1.0;
    for (int i = 0; i < abs(second); i++)
        res *= first;

    if (second < 0)
        res = 1 / res;

    return res;
}

IntPower &IntPower::operator=(const IntPower &intPower)
{
    first = intPower.first;
    second = intPower.second;

    return *this;
}

IntPower::operator string() const
{
    stringstream sout;
    sout << "(" << first << "^" << second << ")";
    return sout.str();
}

IntPower &IntPower::operator++()
{
    ++first;
    return *this;
}

IntPower &IntPower::operator--()
{
    --first;
    return *this;
}

IntPower IntPower::operator++(int)
{
    IntPower copy = *this;
    second++;
    return copy;
}

IntPower IntPower::operator--(int)
{
    IntPower copy = *this;
    second--;
    return copy;
}

ostream &operator<<(ostream &out, const IntPower &intPower)
{
    out << (string)intPower;
    return out;
}

istream &operator>>(istream &in, IntPower &intPower)
{
    in >> intPower.first >> intPower.second;
    return in;
}
