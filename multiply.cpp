#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    cout << "5 random numbers between 1 and 100:" << endl;

    for (int i = 0; i < 5; ++i) {
        int random_num = rand() % 100 + 1;  // random number 1 to 100
        cout << random_num << " ";
    }
    cout << endl;

    return 0;
}
