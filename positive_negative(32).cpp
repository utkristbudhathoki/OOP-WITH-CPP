#include<iostream>
using namespace std;
class posneg
{
	private:
	int a;
	public:
	void getdata();
	void putdata();
};
void posneg:: getdata()
{
	cout<<"Enter the number:";
	cin>>a;
}
void posneg:: putdata()
{
	if(a>0)
	cout<<"The number is positive";
	else if(a<0)
	cout<<"The number is negative";
	else
	cout<<"The number is Zero";
}

int main(){
	posneg aa;
	aa.getdata();
	aa.putdata();
	return 0;
}
