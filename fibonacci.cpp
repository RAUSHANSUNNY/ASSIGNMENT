//  Write a program to check whether a given number is 
// there in the Fibonacci series or not.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1, fib = 0;
    bool found = false;

    if (num == 0 || num == 1) {
        found = true;
    } else {
        while (fib <= num) {
            fib = a + b;
            a = b;
            b = fib;
            if (fib == num) {
                found = true;
                break;
            }
        }
    }

    if (found)
        cout << num << " is present in the Fibonacci series." << endl;
    else
        cout << num << " is not present in the Fibonacci series." << endl;

    return 0;
}