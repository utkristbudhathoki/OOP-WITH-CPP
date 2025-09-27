#include <iostream>
using namespace std;

int main() {
    double obtainedMarks, totalMarks, percentage;

    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    cout << "Enter total marks: ";
    cin >> totalMarks;

    if (totalMarks == 0) {
        cout << "Total marks cannot be zero." << endl;
        return 1; // Exit with error
    }

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage = " << percentage << "%" << endl;

    cout << "Press Enter to exit...";
    cin.ignore();   // To ignore leftover newline from previous input
    cin.get();      // Waits for Enter key press

    return 0;
}
