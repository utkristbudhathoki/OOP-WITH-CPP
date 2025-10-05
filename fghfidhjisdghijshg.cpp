/*#include<iostream>
using namespace std;
class add{
	int a,b;
	public:
	void getdata();
	void putdata();
};
void add::getdata(){
	cout<<"\n enter two number:";
	cin>>a>>b;
}
void add::putdata(){
	cout<<"Addition:"<<a+b;
}

//obj
 int main(){
	 add obj;
	 obj.getdata();
	 obj.putdata();
	 return 0;
 }
 */
 
 
#include<iostream>
using namespace std;
class oddeven{
	private:
	int a;
	public:
	void getdata();
	void putdata();
};
void oddeven::getdata(){
	cout<<"Enter the number to check odd even:";
	cin>>a;
}
void oddeven::putdata(){
	if(a%2==0)
	cout<<"\n The given number is even";
	else
	cout<<"The give number is odd";
	
}

//object
int main(){
	oddeven obj;
	obj.getdata();
	obj.putdata();
	return 0;
}	 
