#include<iostream>  
//used for splitting string
#include<string>
#include<vector>
#include<iterator>
using namespace std;



int main() {

    //initializing the loop function [different examples of loops]
    int loops();
    //calling the loop function
    loops();

    //initialize function that takes in 2 integers
    int multiply(int, int);
    //set two integers
    int x = 6;
    int y = 10;
    //call function and save result as `val`
    int val = multiply(x, y);
    //print out the result
    cout << "The multiplication value is: " << val << endl;


    //initialize factorial function
    int factorial(int);
    //initialize factorial and input value
    int fact, value;
    //prompt user for input
    cout << "Enter any number: ";
    //save input value
    cin >> value;
    //call the factorial function
    fact = factorial(value);
    //output the factorial number
    cout << "Factorial of a number is: " << fact << endl;

    //initialize split function
    vector<string> split(string, string);
    //initialize split vector of results
    vector<string> v;
    //string to be split
    string str = "Hello World";
    //what to be split on (delimiter)
    string dl = " ";
    //call function
    v = split(str, dl);
    //print results
    for (unsigned long i = 0; i < v.size(); i++)
        cout << v[i] << "\n ";

    //initialize pass by ref fn
    void passbyref(int &x, int &y);
    int num1 = 15;
    int num2 = 25;
    cout << "Pass-by-reference:\n";
    cout << "Before:\n";
    cout << num1 << num2 << "\n";
    passbyref(num1, num2);
    cout << "After:\n";
    cout << num1 << num2 << "\n";

    //initialize pass by val fn
    void passbyval(int x, int y);
    int num3 = 80;
    int num4 = 75;
    cout << "Pass-by-value [default]:\n";
    cout << "Before:\n";
    cout << num3 << num4 << "\n";
    passbyval(num3, num4);
    cout << "After:\n";
    cout << num3 << num4 << "\n";

	return 0;
}

int factorial(int n) {
    //if the value is below zero, wrong value and return -1
	if (n < 0)
		return(-1); 
    //if the value is 0, end recursive function
	if (n == 0)
		return(1);
    //compute multiplication for factorial and return after each value
	else {
		return(n * factorial(n - 1));
	}
}

int loops() {

    //initialize i for the while loop
    int i = 1;
    //set condition(s) for the while loop
    while (i < 6) {
        //do thing
        cout << "Hello World but while loop\n";
        //increment conditional
        i++;
    }

    //initialize conditional
    for (int j = 1; j <= 10; j++) {
    //do thing
    cout << "Hello World but for loop\n";
    }

    int k = 2;
    //start with do thing
    do {
        cout << "Hello World but do while loop\n";
        k++;
    //then check conditional
    } while (k < 1);

    return 0;
}

//send in two integers
int multiply(int first, int second) {
    //return product of two numbers
    return first * second;
}

vector<string> split(string str, string dl) {
    //start empty vector
    vector<string> v;

    //if string is not empty
    if (!str.empty()) {
        string::size_type start = 0;
        do {
            //find the delimiter
            size_t x = str.find(dl, start);
            //if string is out of range, break
            if (x == string::npos) break;
            //look for more delimiters
            v.push_back(str.substr(start, x - start));
            //increase size
            start += dl.size();
        } while (true);
        //put split part into vector
        v.push_back(str.substr(start));
    }
    //return vector
    return v;
}

//example of pass-by-reference
void passbyref(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

//example of pass-by-value [default]
void passbyval(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
