#include<iostream>
using namespace std;
void add(int,int);
void add(int,float);
void add(int,int,int);
int main(){
	add(1,2);
	add(2,3.60f);
	add(1,2,3);
	return 0;
}
void add(int a,int b){
	cout<<"Addition:"<<a+b<<endl;
}
void add(int a,float b){
	cout<<"Addition:"<<a+b<<endl;
	}

	void add(int a,int b, int c){
	cout<<"Addition:"<<a+b+c;
}

	
	
