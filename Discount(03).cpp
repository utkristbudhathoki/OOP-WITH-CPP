#include<iostream>
using namespace std;
int main(){
int amount,discount;
cout<<"Enter the Net Amount:";
cin>>amount;
discount = (amount*10)/100;
cout<<"\nThe amount after discount is:"<<amount-discount;
return 0;
}
