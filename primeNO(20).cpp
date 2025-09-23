/*#include<iostream>
using namespace std;
int main(){
	int i,j,count = 0;

	cout<<"Enter the number:";
	cin>>i;
		j =1;
	while(j<=i){
		if(i%j==0)
		count++;
		j++;
	}
	if(count==2)
		cout<<"Prime number";
		else{
			cout<<"Composite number";
			return 0;
		}
	}
*/		

#include<iostream>
using namespace std;
int main(){
	int n,j,count=0;
	cout<<"Enter the number:";
	cin>>n;
	j=1;
	for(;n<=j;j++)
	{
		if(n%j==0)
		count ++;
	}
	if(count==2)
	cout<<"Prime number";
	else{
		cout<<"Composite number";
	}
	return 0;
}
		 		
