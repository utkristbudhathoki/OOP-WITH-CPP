/*
#include<iostream>
using namespace std;
int main(){
	int i=1,n,sum=0;
	cout<<"Enter the number:";
	cin>>n;
	while(i<=n){
		sum=sum+i;
		i+=1;
	}
	cout<<"sum:"<<sum;
	return 0;
}
*/
	
#include<iostream>
using namespace std;
int main(){
	int i,sum=0,n;
	cout<<"Enter the number:";
	cin>>n;
	for(i=1;i<=n;i++){
		sum = sum + i;
	}
	cout<<"sum:"<<sum;
	return 0;
}
