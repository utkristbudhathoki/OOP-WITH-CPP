/*#include<iostream>
using namespace std;

class demo {
    int x, y;
public:
    demo(int m, int n) {   // parameterized constructor
        x = m;
        y = n;
    }
    void putdata() {
        cout << "x: " << x << " y: " << y;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    demo aa(a, b);   // pass values here (parameterized constructor)
    aa.putdata();

    return 0;
}
*/

#include<iostream>
using namespace std;
 class demo{
	 int x,y;
	 public:
	 demo(int a ,int b){
		 x = a;
		 y = b;
		 }
		 
void putdata(){
	cout<<"X:"<<x<<"Y:"<<y;
}
};
int main(){
	int a,b;
	cout<<"Enter the number:";
	cin>>a>>b;
	demo aa(a,b);
	aa.putdata();
	return 0;
}





























