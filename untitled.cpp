#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    double product = num1 * num2 * num3;

    cout << "The product is: " << product << endl;

    cout << "Press Enter to exit...";
    cin.ignore();  // Clear the newline left in buffer after last input
    cin.get();     // Wait for user to press Enter

    return 0;
}
