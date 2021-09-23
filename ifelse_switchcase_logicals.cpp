// C++ conditions and if statements

#include <iostream>
using namespace std;


int main() {
    //setting boolean (true/false) value
    bool x = true;
    //one condition if statement
    if (x == true) {
        cout << "x is true";
    }

    //setting integer values
    int y = 90;
    int z = 100;
    //two condition if statement
    if (z > 50 && y > 80) {
        //adding a new line with '\n'
        cout << "\nz is greater than 50 and y is greater than 80\n";
    }

    //if, else if, and else statements -- one conditional
    if (z > 100) {
        cout << "z is greater than 100";
    } else if (x == false) {
        cout << "x is false";
    } else if (y == 90) {
        cout << "y is 90";
    } else {
        cout << "no conditions are met";
    }

    //checking if C++ does short circuits (it does)
    if (x == true || x == 3) {
        cout << "\nshort circuitting by going into true without checking x = 3 since the bool1 is true\n";
    } 

    //switch statement in C++
    switch (y) {
        case 1:
            cout << "y is 1\n";
        case 90:
            cout << "y is 90\n";
        case 100:
            cout << "y is 100\n";
    }

    //need to add the `break;`, otherwise C++ will compute all cases after one is met
    switch (y) {
        case 1:
            cout << "y is 1\n";
            break;
        case 90:
            cout << "y is 90\n";
            break;
        case 100:
            cout << "y is 100\n";
            break;
    }
}