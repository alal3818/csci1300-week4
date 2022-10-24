#include <iostream>
using namespace std;

int main() {

    double budget;
    char t;

    cout << "What is your budget?" << endl;
    cin >> budget;

    if (budget <= 0) {
        cout << "Please enter a valid input." << endl; // end program

        return 0;
    }

    cout << "What mode of transportation would you like to take (B, T, or A)?" << endl; // Asks user what transportation and records it
    cin >> t;

    // If the input is not valid 
    if (t != 'A' && t != 'T' && t != 'B') { // If the inputs don't match
        cout << "Please enter a valid input. " << endl; // End program

        return 0;
    }

    if (t == 'B') { // If they chose Bus
        if (budget >= 175.25) {  //budget is 175.25 or more and they choose B for transportation
            cout << "Yes, this vacation is within your budget!"<< endl;
            return 0;
        }
        else {
            cout << "Sorry, this vacation is outside your budget." << endl; // The input is less lan the required amount
            return 0;
            }
    }

    // they picked train
    if (t == 'T') {   
        if (budget >= 240.66) { // affordable
            cout << "Yes, this vactaion is within your budget!" << endl;
            return 0;
        }
            // It doesn't meet their budget
        else {
            cout << "Sorry this vacation is outside your budget." << endl;
            return 0;
        }
    }

    // they picked airplane
    if (t == 'A') {
        if (budget >= 350.66) { // affordable
            cout << "Yes, this vacation is within your budget!" << endl;
            return 0;
        }
        else {
            cout << "Sorry this vacation is outside your budget." << endl;
            return 0;
        }
    } 
    return 0; // end
    
    
    }
