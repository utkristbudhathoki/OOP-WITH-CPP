/*#include <iostream>
using namespace std;

class demo {
private:
    int x;
    static int y; // static variable declaration

public:
    void getdata(int a) {
        x = a;
        y=y+1; // ❌ corrected y=y++; → proper increment
    }

    void putdata() { // ❌ corrected function name and added proper braces
        cout << "X:" << x << "\tY:" << y << endl;
    }

    static void abc(); // ❌ declare static function properly
};

// ❌ define static variable outside the class
int demo::y ;

// ❌ define static function outside the class
void demo::abc() {
    cout << "\nStatic Y: " << y << endl;
}

// ❌ main must be outside the class
int main() {
    demo aa;
    aa.getdata(10);
    aa.putdata();  // ❌ corrected missing parentheses
    demo::abc();   // call static function properly
    return 0;
}
*/

#include<iostream>
using namespace std;
class demo{
	int x;
	static int y;
	
	public:
	void getdata(int a){
		x = a;
		y = y+1;
	}
	void putdata(){
		cout<<"X:"<<x<<"\nY:"<<y;
	}
static void abc();
};
int demo::y;

void demo::abc(){
	cout<<"Static value outsede function is also:"<<y;
}
int main(){
demo aa;
	aa.getdata(9);
	aa.putdata();
	demo::abc();
	return 0;
}
	
	
