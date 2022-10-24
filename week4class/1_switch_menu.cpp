#include <iostream>

using namespace std;

// The switch statement
// When to use it: when you have multiple alternatives 
// for the value of a variable. Most often: with int and char

// if (a == '1' || a == 'x')


// projects
// Very often used for menu options:
// Please choose your difficulty option:
// 1. Easy
// 2. Medium
// 3. Difficult

// When you cannot use it:
// 1. When your variable can take a value in a range
// 2. Cannot be used with double variables because == is not precise

// if (x >= 10 && x <50)
// if (x == 'c')
// if (x == 12)

// faster than if statemet if more than 5 options

// program to demo writing menus using switch construct

// loops
int main()
{
    char option;
    cout << "Welcome to Target" << endl;
    cout << "a: Furniture" << endl;
    cout << "b: Supplies" << endl;
    cout << "c: Grocery" << endl;
    cout << "Q: Quit" << endl;
    cout << "Choose a category: ";


    // loop untril the user enters q
    while (option != 'q' && option != 'Q') {
        if(option == 'a')
    {
        cout << "You chose Furniture" << endl;
    }
    else if(option == 'b')
    {
        cout << "You chose Supplies" << endl;
    }
    else if(option == 'c')
    {
        cout << "You chose Grocery" << endl;
    }
    else 
    {
        cout << "Sorry, we don't have that option. Goodbye!" << endl;
    }

    }
    cin >> option;
    switch(option) { // always have to be a variable NOT a condition
        case 'A':
        case 'a': cout << "You chose Furniture" << endl;
            
        case 'B':
        case 'b': cout << "You chose Supplies" << endl;
                    
        case 'C':
        case 'c': cout << "You chose Grocery" << endl;
                         
        default: cout << "Sorry, we don't have that option. Goodbye!" << endl;
             break;   // Break statements must be present or switch statement will fall through
        // update the loop variable so that it terminates at some point
        char(opti)
        cout << "Welcome to Target" << endl;
        cout << "a: Furniture" << endl;
        cout << "b: Supplies" << endl;
        cout << "c: Grocery" << endl;
        cout << "Q: Quit" << endl;
        cout << "Choose a category: ";
        cin >> option >> endl;
    
    }

    
    return 0;

}