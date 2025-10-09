#include<iostream>
using namespace std;

class demo {
    int a;
public:
    void getdata() {
        cout << "Enter the value: ";
        cin >> a;
    }
    void putdata() {
        cout << "A: " << a << endl;
    }
    demo operator ++() {   // prefix increment
        a = a + 1;
        return *this;
    }
};

int main() {
    demo aa;
    aa.getdata();

    cout << "ORIGINAL VALUE: ";
    aa.putdata();

    ++aa;  // calls operator++

    cout << "INCREASED VALUE: ";
    aa.putdata();

    return 0;
}
