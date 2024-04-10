#include <iostream>
#include "IntPower.h"

int main()
{
    IntPower intPower1;
    cout << "Default intPower (1): " << intPower1 << endl;
    cout << "Enter new values for intPower1 (base, then index):" << endl;
    cin >> intPower1;
    cout << "intPower1: " << intPower1 << endl << endl;

    double base;
    int index;
    cout << "Enter intPower2 base: ";
    cin >> base;
    cout << "Enter intPower2 index: ";
    cin >> index;
    IntPower intPower2(base, index);
    cout << "intPower2: " << intPower2 << endl << endl;

    IntPower intPower3 = intPower2;
    cout << "intPower3 (copy of intPower2): " << intPower3 << endl;
    intPower3 = intPower1;
    cout << "intPower3 (copy assignment of intPower1): " << intPower3
         << endl << endl;

    cout << "intPower2 as string: " << (string)intPower2 << endl;
    cout << "intPower2 result: " << intPower2.power() << endl << endl;

    cout << "intPower1 operations:" << endl;
    ++intPower1;
    cout << "Prefix increment: " << intPower1 << endl;
    --intPower1;
    cout << "Prefix decrement: " << intPower1 << endl;
    intPower1++;
    cout << "Postfix increment: " << intPower1 << endl;
    intPower1--;
    cout << "Postfix decrement: " << intPower1 << endl;

    return 0;
}
