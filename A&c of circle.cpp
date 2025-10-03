#include<iostream>
using namespace std;
int main(){
float area,circumference,radius;
cout<<"Enter the radius of Circle:";
cin>>radius;
area = 3.14 * radius * radius;
circumference = 2 * 3.14  * radius;
cout<<"The Area of a circle is :"<<area<<"\nThe Circumference of a cicle is :"<<circumference;
return 0;
}
