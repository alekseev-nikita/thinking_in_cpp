#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    cout << "Hello, World" << endl;

    Person p1, p2;

    p1.name = "John";
    p1.age = 50;
    p2.name = "Paul";
    p2.age = 60;

    cout << p1.name << p1.age << endl;
    cout << p2.name << p2.age << endl;

    Person &refP1 = p1;
    refP1.name = "Sten";

    Person *ptrP1 = &p1;
    ptrP1->name = "Jack";

    cout << p1.name << p1.age << endl;

    int arr[] = {6, 4, 9};
    int *parr = arr;
    cout << parr[1] << endl;
    return 0;
} // namespace std;
