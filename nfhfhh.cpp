/*#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inch;

public:
    // function to input data
    void getdata() {
        cout << "Enter feet and inches: ";
        cin >> feet >> inch;
    }

    // function to display data
    void putdata() {
        cout << feet << " feet " << inch << " inches" << endl;
    }

    // function to add two Distance objects (PASS BY VALUE)
    // Here d1 and d2 are PASSED BY VALUE → copies of the objects are created
    void addDistance(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;   // works on the copies
        inch = d1.inch + d2.inch;

      
    }
};

int main() {
    Distance d1, d2, d3;

    // input data for two objects
    d1.getdata();
    d2.getdata();

    // show original objects
    cout << "First object: ";
    d1.putdata();

    cout << "Second object: ";
    d2.putdata();

    // add two objects → copies of d1 and d2 are passed to the function
    d3.addDistance(d1, d2);

    // show result
    cout << "Sum of two objects: ";
    d3.putdata();

    return 0;
}

*/




//TRY,THROW,CATCH
/*
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter any two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            // if divisor is 0, throw exception
            throw b;
        }
        else {
            c = a / b;  // safe division
            cout << "Result is: " << c << endl;
        }
    }
    catch (int x) { 
        cout << "Divide by zero exception! You entered: " << x << endl;
    }

    return 0;
}


*/
/*
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two number:";
	cin>>a>>b;
	try{
		if(b==0){
			throw(0);
		}
		else if(b<0){
			throw string("NEGATIVE NOT ACCEPTED");
		}
		else{
			cout<<"RESULT IS:"<<a/b;
		}
	}
	catch(int x){
		cout<<" THIS IS EXCEPTION YOU ENTERED:"<<x<<endl;
}
catch(string msg){
	cout<<"EXCEPTION:"<<msg;
}

return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
    int a = 10;      // normal variable
    int *p = &a;     // pointer stores address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p holds: " << p << endl;
    cout << "Value at pointer p: " << *p << endl;  // dereference

    return 0;
}










































