/*
#include <iostream>
using namespace std;

class demo {
private:
    int a, b;

public:
    void getdata();
    friend int sum(demo obj);  // friend function declaration
};

void demo::getdata() {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

int sum(demo obj) {
    return (obj.a + obj.b);   // directly access private members
}

int main() {
    demo obj;
    obj.getdata();
    cout << "Addition: " << sum(obj);
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
class frnd{
	int a,b;
	public:
	void getdata();
	friend int mul(frnd obj);
};
void frnd::getdata()
{
cout<<"Enter the Number:";
cin>>a>>b;
}

int mul(frnd obj){
	return(obj.a*obj.b);
}
 int main(){
	 frnd obj;
	 obj.getdata();
	 cout<<"Mul:"<<mul(obj);
	 return 0;
 }

*/
#include<iostream>
using namespace std;
class cube{
	int a;
	public:
	void getdata();
	friend int cub(cube obj);
};
void cube::getdata()
{
	cout<<"Enter the number:";
	cin>>a;
}
int cub(cube obj)
{
	return (obj.a*obj.a*obj.a);
}
int main(){
	cube obj;
	obj.getdata();
	cout<<"Cube:"<<cub(obj);
	return 0;
}
