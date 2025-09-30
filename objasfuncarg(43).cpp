
#include <iostream>  // Include the Input/Output library for cin and cout
using namespace std; // So we don’t have to write std:: before cout and cin

// Define a class named 'hourmin' to store hours and minutes
class hourmin {
private:
    int h, m; // Private members: 'h' for hours, 'm' for minutes. Only accessible inside class.

public:
    void getdata();           // Function to input hours and minutes from user
    void putdata();           // Function to display hours and minutes
    void sum(hourmin T1, hourmin T2); // Function to add two 'hourmin' objects
};

// Function to input data
void hourmin::getdata() {
    cout << "Enter the hour and min: "; // Ask user to enter hours and minutes
    cin >> h >> m;                      // Store input in object's 'h' and 'm'
    // Example input: 2 50  → h = 2, m = 50
}

// Function to add two hourmin objects
void hourmin::sum(hourmin T1, hourmin T2) {
    m = T1.m + T2.m;          // Add minutes of T1 and T2
    h = T1.h + T2.h + m / 60; // Add hours of T1 and T2 plus any carry from minutes
    m = m % 60;               // Keep only the remaining minutes under 60
    // Example: T1 = 2h50m, T2 = 1h20m
    // m = 50 + 20 = 70 → 70/60 = 1 carried to hours, 70%60 = 10 minutes
    // h = 2 + 1 + 1 = 4 → result = 4h10m
}

// Function to display data
void hourmin::putdata() {
    cout << "\nHour: " << h << "\nMinute: " << m << endl;
    // Displays the object's hours and minutes
}

int main() {
    hourmin T1, T2, ass;  // Create 3 objects of 'hourmin'
    
    T1.getdata();        // Ask user to input hours and minutes for T1
    // Suppose user enters: 2 50 → T1 = 2h50m
    
    T2.getdata();        // Ask user to input hours and minutes for T2
    // Suppose user enters: 1 20 → T2 = 1h20m

    ass.sum(T1, T2);      // Add T1 and T2 and store result in T3
    // Calculation: 2h50m + 1h20m = 4h10m
    
    T1.putdata();        // Display T1 → Output: Hour: 2 Minute: 50
    T2.putdata();        // Display T2 → Output: Hour: 1 Minute: 20
    ass.putdata();        // Display T3 → Output: Hour: 4 Minute: 10

    return 0;            // End of program
}



