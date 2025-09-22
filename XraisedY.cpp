/*
#include<iostream>
using namespace std;
int main(){
	int x,y,pro=1,counter=1;
	cout<<"Enter  the value of x and y:"; // X raised to Y
	cin>>x>>y;
	while(counter<=y){
	pro = pro*x;
	counter+=1;
}
	cout<<"The product of "<< x <<" raised to "<< y <<" is:"<< pro;
	return 0;
}
*/

# include<iostream>
using namespace std;
int main(){
	int x,y,pro=1,i;
	cout<<"Enter the  value of x and y:";
	cin>>x>>y;
	for(i =1; i<=y; i++)
	{
	pro = pro* x;
}
cout<<"Your Answer is:"<<pro;
return 0;
}
