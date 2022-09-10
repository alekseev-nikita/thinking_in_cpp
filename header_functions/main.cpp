#include <stdio.h>
#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    int a = CalcSum(5, 6);
    double b = CalcSum(1.3, 2.1);
    cout << "For int: " << a << endl;
    cout << "For double: " << b << endl;

    int size = 24;
    uint fib[size] = {0};
    cout << "Default values:" << endl;
    for(uint ui : fib) {
        cout << ui << endl;
    }

    FillFib(fib, size);
    cout << "Fibonacci nums of " << size << endl;
    for(uint &x : fib) {
        cout << "--- " << x << endl;
    }
    return 0;
}
