#include <iostream>       
using namespace std;

int main() {
    double a, b;        

    cout << "Enter two numbers: ";  
    cin >> a >> b;                 
    if (a > b) {
       
        cout << a << " is greater than " << b;
    }
    else if (b > a) {
        cout << b << " is greater than " << a ;
    }
    else {
        cout << "Both are equal";
    }

    return 0; 
}
