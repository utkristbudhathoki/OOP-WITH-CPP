#include<iostream>
using namespace std;
inline int add(int a,int b){
	return a+b;
}
inline int cube(int a){
	return a*a*a;
}
int main(){
	cout<<"The sum of 99+23 is:"<<99+23<<endl;
	cout<<"The cube of 5 is:"<<5*5*5<<endl;
	return 0;
}
