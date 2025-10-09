/*
#include<iostream>
using namespace std;
int main() {
    int x = 0, y = 1, z = 0, count = 0, n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Fibonacci of a non-positive number is not possible." << endl;
        return 0;
    }
    cout << "The Fibonacci series is: ";
    while (count < n) {
        cout << z ;
        x = y;
        y = z;
        z = x + y;
        count++;
    }
    return 0;
}
*/


#include<iostream>
using namespace std;
int main(){
	int x,y,z,count,n;
	cout<<"\n""Enter the number:";
	cin>>n;
	x = 0;
	y = 1;
	z = 0;
	for(count = 1;count<=n;count = count+1)
	{
		cout<<"\n"<<z;
		x= y;
		y = z;
		z = x+y;
	}
	return 0;
}
