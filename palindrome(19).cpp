/*#include<iostream>
using namespace std;
int main(){
	int i,pal=0,orgin;
	cout<<"Enter the given number:";
	cin>>i;
	orgin=i;
	while(i>0){
pal = (pal*10)+ i%10;
i = i/10;
}
if(orgin == pal)
	cout<<"The given number is palindrome";

else
cout<<"Not palindrome";

return 0;
}		
*/
#include<iostream>
using namespace std;
int main(){
	int i,pal=0,orgi;
	cout<<"	Enter the given number:";
	cin>>i;
	orgi=i;
	for(;i>0;i=i/10)
	pal = (pal*10)+i%10;
	
if(pal == orgi)
	cout<<"The given number is palindrome";
else
cout<<"Not palindrome";

return 0;
}	
	
	
