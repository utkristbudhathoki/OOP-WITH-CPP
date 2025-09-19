#include <iostream>
using namespace std;

int main() {
    double numbers[5];
    double product = 1;

    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        product *= numbers[i];
    }

    cout << "The product of the 5 numbers is: " << product << endl;

    return 0;
}
