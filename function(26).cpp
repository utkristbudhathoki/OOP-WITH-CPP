// USING WITH ARGUMNET NO RETURN
#include<iostream>
using namespace std;
void add(int,int);//prototype
int main(){
	int a,b;
	cout<<"Enter the number a and b:";
	cin>>a>>b;
	add(a,b);
	return 0;
}
	void add(int a, int b){
		int c;
		c= a+b;
		cout<<"Addition:"<<c;
	}
