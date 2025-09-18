#include <iostream>
using namespace std;

int main() {
    int Area, length, breadth;
    
    cout << "\nEnter the Length and Breadth of a Rectangle: ";
    cin >> length >> breadth;
    
    Area = length * breadth;
    cout << "Area of a rectangle is: " << Area << endl;

    return 0;
}
