/*#include<iostream>
using namespace std;
int main(){
	int a=1;
	for(a =1;a<=5;a=a+1){
	cout<<a<<endl;
	if(a == 5)
		break;
		}
		return 0;
	}
		
*/

//continue statement

#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=10;i=i+1){
		if(i == 5)
	continue;
	cout<<"\n"<<i;
}
	return 0;
}
