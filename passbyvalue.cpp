#include<iostream>
#include<string>
using namespace std;

class BOOK {
    string name;
    int price;

public:
    // Constructor
    BOOK(string n, int p) {
        name = n;
        price = p;
    }

    // Display if price is lower than 500 (example condition)
    void display() const {
        if (price < 500) 
            cout << "Book name: " << name 
                 << "\tPrice: " << price << endl;
        
    }
};

int main() {
    const BOOK b1("C++ Programming", 600);
    const BOOK b2("Java Basics", 400);
    const BOOK b3("Python Guide", 300);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
