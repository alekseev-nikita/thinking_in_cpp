#include <iostream>
#include <string>

using namespace std;

class Book {
    private:
        string name;
        double price;
    public:
        Book(string n, double p): name(n), price(p) {} 
        void showData() {
            cout << "Name: " << name <<"; Price is " << price << endl;
        }
};

int main() {
    cout << "Hello, Nikita" << endl;
    Book *b = new Book("Bible", 3.33);
    b->showData();
    cout << "Fin" << endl;
}