#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	demo(){
		a =10;  //default argument
	}
	
	demo(int x)
	{
		a = x;
	}
	demo(demo &z){
		a = z.a;
	} 
	void putdata()
	{
		cout<<"\nA="<<a;
	}
	};
	int main(){
		demo aa;
		demo bb(20);
		demo cc(bb);
		
		aa.putdata();
		bb.putdata();
		cc.putdata();
		return 0;
	}
		
	
