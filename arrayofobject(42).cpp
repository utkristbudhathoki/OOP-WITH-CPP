#include<iostream>
using namespace std;
 class xyz{
	
	 public:
	 void getdata();
	 void putdata();
	 
	  private:
	 int a,b;
 };
 void xyz::getdata(){
	 cout<<"Enter Two Numbers:";
	 cin>>a>>b;
 }
 void xyz::putdata(){
	 cout<<"\na:"<<a<<"\nb"<<b;
 }
 
// obj
int main(){
		int i;
	xyz obj[5];

	for(i=0;i<5;i++)
	
	obj[i].getdata();

	for(i=0;i<5;i++)
	
	obj[i].putdata();

	return 0;
}


