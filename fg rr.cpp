#include <iostream>
using namespace std;

// inline function
inline float convert(float m) {
    return m / 1000;   // convert meter to km
}

int main() {
    float m;
    cout << "Enter meter: ";
    cin >> m;
    cout << "KM is: " << convert(m) << endl;  // semicolon added
    return 0;
}

	
