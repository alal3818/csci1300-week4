#include <iostream>
using namespace std;
// print the first 10 values starting from 1
// 0, -ve, +ve, boundry values

int main() {

    // loop value to print value
    int value = 1;
    int counter = 0; 
    while(counter < 10) { // new variable to count; count < 10
        cout << value << endl;
        value = value + 1;

        // update the counter
        counter++;
    }

    // initirlization will only happen once
    // for (int counter = 0; counter <= 10; counter ++); { // counter < 11

    //     cout << counter << endl;
    // // update happens here
    // }

    // print numbers from 0 to 10 using a for loop

    // print every other number
    // count = 2
    for (int counter = 0; counter <= 10; counter = counter + 2); { // counter < 11

        if (counter % 2) {
            cout << counter << endl;
        }
        cout << counter << endl;
    }
return 0;
    
}