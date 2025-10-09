#include<iostream>
#include<string>
using namespace std;
class book{
	string name;
	int price;
	public:
	book(string n, int p){
		name = n;
		price = p;
	}
	void putdata() const{
		if(price<500){
			cout<<"cheaper book is:"<<name<<"price"<<price;
		}
	}};
	int main(){
		const book aa("C++",600);
		const book bb("MATH",400);
		aa.putdata();
		bb.putdata();
		return 0;
	}
	
