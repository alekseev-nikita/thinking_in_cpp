#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main() {
    cout << "Hello, Nikita" << endl;
    Book *b = new Book("Bible", 3.33);
    b->showData();

    Book *n = new Book("Nocronomicon", 6.66);
    n->showData();


    cout << "Fin" << endl;
}