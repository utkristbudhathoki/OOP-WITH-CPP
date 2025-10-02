#include <iostream>
using namespace std;

// Define enum for traffic lights
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    TrafficLight signal;

    signal = RED;   // current signal is RED

    if (signal == RED) {
        cout << "STOP! The light is RED." << endl;
    }

    signal = YELLOW; // change signal to YELLOW

    if (signal == YELLOW) {
        cout << "WAIT! The light is YELLOW." << endl;
    }

    signal = GREEN; // change signal to GREEN

    if (signal == GREEN) {
        cout << "GO! The light is GREEN." << endl;
    }

    return 0;
}

