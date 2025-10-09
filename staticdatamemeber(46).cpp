#include<iostream>  // Include input/output library
using namespace std;

// Class definition starts here
class demo {
    private:
        int x, y;         // Instance variables (each object has its own copy)
        static int z;     // Static variable (shared among all objects)
    
    public:
        // Function to set data
        void getdata(int a, int b) {
            x = a;        // Set object's x
            y = b;        // Set object's y
            z = 88;       // Set static z (same for all objects)
        }

        // Function to display data
        void putdata() {
            cout << "x:" << x << "\ty:" << y << "\tz:" << z << endl;
        }
};

// Static member definition (must be defined outside class)
int demo::z;

int main() {  // Main program starts here
    demo aa, bb;          // Create two objects of class demo: aa and bb

    aa.getdata(95, 10);   // Set aa's x=95, y=10, and z=88 (static)
    bb.getdata(4, 6);     // Set bb's x=4, y=6, and z=88 (overwrites previous z)

    aa.putdata();          // Display aa: x=95, y=10, z=88
    bb.putdata();          // Display bb: x=4, y=6, z=88 (same static z)

    return 0;              // End of program
}
