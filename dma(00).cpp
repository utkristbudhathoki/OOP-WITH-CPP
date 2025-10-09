#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	// Dynamically allocate memory
	int*arr = new int[n];
	 cout<<"Enter "<<n<<"numbers:";
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 cout<<"you entered";
	 for(int i=0;i<n;i++){
		 cout<<arr[i]<<" ";
	 }
	 
	 //FREE DYNAMICALLY ALLOCATED MEMORY
	 delete[]arr;
	 return 0;
 }
	 
