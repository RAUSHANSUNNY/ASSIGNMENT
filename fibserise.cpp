// Write a program to find the Nth term of the Fibonacci series. 
 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. N must be a positive integer." << endl;
    } else if (n == 1) {
        cout << "Fibonacci term at position " << n << " is: 0" << endl;
    } else if (n == 2) {
        cout << "Fibonacci term at position " << n << " is: 1" << endl;
    } else {
        int a = 0, b = 1, fib;
        for (int i = 3; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "Fibonacci term at position " << n << " is: " << b << endl;
    }

    return 0;
}