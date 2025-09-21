/*#include<iostream>
using namespace std;
int main() {
    int i, j = 1, k;
    cout << "Enter the number for which you want the table: ";
    cin >> i;
    cout << "Enter the number up to which you want the table: ";
    cin >> k;
    while (j <= k) {
        cout << i << " * " << j << " = " << i * j << endl;
        j = j + 1;
    }

    return 0;
}
*/

//USIGN FOR LOOP 

#include<iostream>
using namespace std;
int main() {
    int i, j = 1;
    cout << "Enter the number for which you want the table: ";
    cin >> i;
    for (; j <= 10; j++) {
        cout << i << " * " << j << " = " << i * j << endl;
    }
    return 0;
}

