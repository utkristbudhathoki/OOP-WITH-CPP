/*#include<iostream>
using namespace std;
int main(){
	int i,rev = 0;
	cout<<"Enter the number:"; 
	cin>>i; // i = 123 
	while(i>0){ // i >0 + 12)i>0=12
	rev = (rev *10)+i%10; // 1) 3 2)321
	i = i/10; // 12
}
	cout<<"Reverse of given number is :"<<rev;
	return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
	int n,rev=0;
	cout<<"Enter the number:";
	cin>>n;
	for(;n>0;n=n/10){
	rev = (rev*10)+n%10;
}
cout<<"Reverse of given a number is:"<<rev;
	return 0;
}
