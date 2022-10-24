#include <iostream>
using namespace std;

int main() {
    int x = 13;
    int y = 5;
    int z = x + y++; // x+y ; y++
    cout << ((x--/y++)+(y-- - --y)) * x-- << endl; // PEMDAS L---R

    13
}