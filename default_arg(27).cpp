#include<iostream>
using namespace std;
void add(int a =10, int b =33);
int main(){
	add();
	add(1);
	add(2,3);
	return 0;
}
void add(int a, int b){
	cout<<"Addition:"<<a+b<<endl;
}
