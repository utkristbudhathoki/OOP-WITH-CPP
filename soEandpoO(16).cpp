/*
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,pro=1,digit;
	cout<<("Enter the number:");
	cin>>n;
	while(n>0){
		digit = n%10;
		if(digit%2==0)
		sum = sum+digit;
		else{
		 pro = pro*digit;
	 }
		 n = n/10;
	 }
	 cout<<"sum:"<<sum;
	 cout<<"\npro:"<<pro;
	 return 0;100%
 }
*/

//USING FOR LOOP
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,pro=1,digit;
	cout<<"Enter The Number:";
	cin>>n;
	for(;n>0;n=n/10)
	{
		digit = n%10;
		if(digit%2==0)
		sum = sum+digit;
		else{
			pro = pro*n%10;
		}
	}
		cout<<"sum:"<<sum;
		cout<<"\nPro:"<<pro;
		return 0;
	}
