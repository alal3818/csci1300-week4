#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    char s;
    double topping;
    double total;

    cout << "What size pizza would you like to order? " << endl;
    cin >> s;   // store size input in s

    // If it doesnt match any of the choices, end program
    if (s != 'S' && s != 'M' && s != 'L') {
        cout << "Please enter a valid input." << endl;
        return 0;

    }

    // The diff sizes and toppings 

    // SMALL
    if (s == 'S') { 
        cout << "How many toppings do you want?" << endl; // ask topping
        cin >> topping; 
        
        if (topping < 0) { // If less than zero it gets mad >:(
            cout << "Please enter a valid input" << endl;
            return 0;
        }

        else { // If the topping is a positive number
            total = 0.79 * topping + 4.99; // calculates the total
            // std::cout << setprecision(2);
            // std::cout << std::fixed;
            cout << "Your total is $" << total << endl; // output total

            return 0;
        }
    }
    

    // Medium
    if (s == 'M') { 
        cout << "How many toppings do you want?" << endl; // ask topping
        cin >> topping;   
    
        if (topping < 0) { // If less than zero it gets mad >:(
            cout << "Please enter a valid input" << endl;
            return 0;
        }

        else {  // If the toppings are a positive number
            total = 1.50 * topping + 5.99;
            cout << "Your total is $" << total << endl;

            return 0;
        }
    }

    // Large
    if (s = 'L') { 
        cout << "How many toppings do you want?" << endl;
        cin >> topping; 
    
        if (topping = 0) { // If less than zero it gets mad >:(
            cout << "Please enter a valid input" << endl;
            return 0;
        }
        else { // Positive input
            total = (2.25 * topping) + 6.99;
            cout << "Your total is $" << total << endl;
            return 0;
        }
    }
    
// return 0;
}