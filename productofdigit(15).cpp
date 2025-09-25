/*#include<iostream>
using namespace std;
int main(){
	int pro=1,n;
	cout<<"ENTER YOUR NUMBER:";
	cin>>n;
	while(n>0)
		pro= pro*n%10;
		n = n/10;
	
	cout<<"PRODUCT OF GIVEN NUMBER IS :"<<pro;
	return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
	int pro=1,n;
	cout<<"Enter the Number:";
	cin>>n;
	for(; n>0; n=n/10)
		pro = pro*(n%10);
	cout<<"Product of given number is:"<<pro;
	return 0;
}
