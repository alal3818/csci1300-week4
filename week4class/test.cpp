#include <iostream>
using namespace std;

int main() {
    string firstname;
    string lastname;

    cout << "What is your name? " << endl;
    cin >> firstname >> lastname;

    cout << "Hello! " << firstname << endl;
    cout << lastname << endl;
    return 0;
}