#include <iostream>
#include "func.h"

using namespace std;

int main() {
    cout << "Func from namespace \"example\"" << endl;
    cout << "Number is: " << example::getNumber() << endl;
}