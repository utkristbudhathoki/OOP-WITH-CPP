#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
	void input()
	{
		cout<<"\n Enter No";
		cin>>a;
	}
	friend void max(A,B);
};

class B{
	int b;
	public:
	void getdata()
	{
		cout<<"Enter the number:";
		cin>>b;
	}
	friend void max(A,B);
};
void max(A aa, B bb)
{
	if(aa.a>bb.b)
	cout<<"max:"<<aa.a;
	else
	cout<<"max:"<<bb.b;
}
int main(){
	A aa;B bb;
	aa.input(),bb.getdata();
	max(aa,bb);
	return 0;
}
