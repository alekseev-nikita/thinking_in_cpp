#include "Book.h"
#include <string>
#include <iostream>

using namespace std;

void Book::showData() {
    cout << "Name: " << name <<"; Price is " << price << endl;
    cout << "Buy it !" << endl;
}