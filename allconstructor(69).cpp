#include<iostream>
using namespace std;
class distance {
private: 
    int feet;
    float inch;
	
public:
    void getdata() {
        cout << "Enter the feet and inches: ";
        cin >> feet >> inch;
    }
	
    void adddistance(distance d1, distance d2) {
        // add feet and inches directly
        inch = d1.inch + d2.inch;
        feet = d1.feet + d2.feet;
    }
	
    void putdata() {
        cout << feet << "-" << inch << endl;
    }
};  // ✅ Only one '}' is needed (previously you wrote '}};')

int main() {
    distance d1, d2, d3;

    d1.getdata();
    d2.getdata();

    d1.putdata();
    d2.putdata();

    d3.adddistance(d1,d2);
    d3.putdata();

    return 0;
}

