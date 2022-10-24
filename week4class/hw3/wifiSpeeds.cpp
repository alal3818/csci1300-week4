#include <iostream>
using namespace std;

int main() { //Defining
    double speed1;
    double speed2;
    double speed3;

    cout << "Enter the wifi speeds over the last 3 classes: " << endl; // Enter the speeds
    cin >> speed1, speed2, speed3; // store speeds in order

    // Negative input ERROR
    if (speed1 < 0 && speed2 < 0 && speed3 < 0) {
        cout << "Please enter a valid input" << endl;
        return 0;
    }

    // Faster
    if (speed1 <= speed2 <= speed3) {
        cout << "The wifi is getting faster!" << endl;
        return 0;
    }

    // Slower
    if (speed1 >= speed2 >= speed3) {
        cout << "The wifi is getting slower!" << endl;
        return 0;
    }
    
    // Unpredicable
    else {
        cout << "The wifi speed is changing unpredicably." << endl;
        return 0;
    }

    return 0;
}