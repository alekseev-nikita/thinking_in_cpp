#include <string>
#include <iostream>

using namespace std;

class Book {
    private:
        string name;
        double price;
    public:
        Book(string n, double p): name(n), price(p) {} 
        void showData();
};