#include <iostream>
#include <string>
using namespace std;

int main () {

    string email = "csci1300@colorado.edu";
    int email_len = email.length();
    // flag variable for boolean checks

    bool flag = false;
    for(int i = 0; i < email_len; i++) {

        if (email[i] == '@') {
            // cout << "Valid email" << endl; // c
            flag = true;
            cout << i << endl;
        }
    }

    // extract the last 4 letters from email
    if (email.substr(17, 4)==".edu" && flag) {
        cout << "valid email!" << endl; 
    }


    return 0;
}