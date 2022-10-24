#include <iostream>
using namespace std;


int main() {
// initialize the variables
    int waterIntake;
    int waterGoal = 64 - waterIntake;

    // user input 
    cout << "Please input fl oz of water: " << endl;
    cin >> waterIntake; 


    // if else checks
    if (waterIntake <= 32) {
        cout << "You are very very dehyrated, get that water in!" << endl << "You have " << waterGoal << " fl oz left." << endl;
    }

        else if (waterIntake >= 32 && waterIntake <= waterGoal) {
            cout << "You ain't there yet chief." << endl << "You still have " << waterGoal << " oz to go" << endl;
        }

        else { // greater than 64 || ALSO () are not needed in else statements
            cout << "You hit your goal yay." << endl;
        }

        return 0;
    }