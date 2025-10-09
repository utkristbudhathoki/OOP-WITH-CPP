#include <iostream>
using namespace std;

int main() {
    int length, breadth, area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
