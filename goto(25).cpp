#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the number:";
cin>>a;

if(a%2==0)
goto even;

else
goto odd;

even:
cout<<"Your number is even";
return 0;

odd:
cout<<"Your number is odd";
return 0;
}
