/*
#include<iostream>
using namespace std;
class rectangle{
	private:
	int l,b,a;
	public:
	rectangle(){
		l= 10;
		b=122;
		a=l*b;
	}
	rectangle(int l1,int b1){
		l=l1;
		b=b1;
	}
	rectangle(rectangle &copy){
		l= copy.l;
		b= copy.b;
	}
	void putdata(){
		a=l*b;
		cout<<"\n Area :"<<a;
	}
	};
	
	int  main(){
rectangle r1;
rectangle r2(22,33);
rectangle r3(r2);
r1.putdata();
r2.putdata();
r3.putdata();
		return 0;
		}

*/


// pass by value
//---->A copy of variable is given to the function
//---->So any change inside the function doesnot affect the orginal variable



#include <iostream>
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
        inch = d1.inch + d2.inch;
        feet = d1.feet + d2.feet;

        // handle if inches exceed 12
        if (inch >= 12) {
            inch = inch - 12;
            feet++;
        }
    }

    void putdata() {
        cout << feet << " feet " << inch << " inches" << endl;
    }
};

int main() {
    distance d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3.adddistance(d1, d2);
    d3.putdata();
    return 0;
}
























