//
// Created by Max on 13.03.2024.
//

#ifndef OOP_LAB_2_1_INTPOWER_H
#define OOP_LAB_2_1_INTPOWER_H


#include <cmath>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class IntPower
{
private:
    double first;
    int second;

public:
    IntPower();

    IntPower(double first, int second);

    IntPower(double first);

    IntPower(const IntPower &intPower);

    double getFirst() const;

    void setFirst(double first);

    int getSecond() const;

    void setSecond(int second);

    double power() const;

    IntPower &operator=(const IntPower &intPower);

    operator string() const;

    IntPower &operator++();

    IntPower &operator--();

    IntPower operator++(int);

    IntPower operator--(int);

    friend ostream &operator<<(ostream &out, const IntPower &intPower);

    friend istream &operator>>(istream &in, IntPower &intPower);
};


#endif //OOP_LAB_2_1_INTPOWER_H
