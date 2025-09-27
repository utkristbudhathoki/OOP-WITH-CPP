#include<iostream>
using namespace std;
class oneton{
	private:
	int n;
	public:
	void getdata();
	void putdata();
};
void oneton::getdata()
{
	cout<<"Enter the number:";
	cin>>n;
}
void oneton::putdata()
{
	int i;
	for(i=1;i<=n;i++)
	cout<<"\n"<<i;
}

//obj
int main(){
	oneton obj;
obj.getdata();
obj.putdata();
return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
