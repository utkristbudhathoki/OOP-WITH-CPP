#include<iostream>
using namespace std;
class maxmin
{
private:
int a, b;
public:
void getdata();
void putdata();
};
void maxmin::getdata()
{
	cout<<"Enter two number:";
	cin>>a>>b;
}
void maxmin::putdata()
{
	if(a>b)
	cout<< a <<" is greater than "<<b;
	else if(a<b)
	cout<< a <<" is less than "<<b;
	else
	cout<<a<<" is equall to "<<b;
}

int main(){
  maxmin aa;
	aa.getdata();
	aa.putdata();
	return 0;
}


	 
