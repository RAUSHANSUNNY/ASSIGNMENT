// Write a program to reverse a given number 
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = abs(num);  

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    
    if (num < 0)
        reversed = -reversed;

    cout << "Reversed number: " << reversed << endl;

    return 0;
}