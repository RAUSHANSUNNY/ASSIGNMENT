// Write a program to calculate HCF of two numbers. 
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "HCF of " << num1 << " and " << num2 << " is: " << a << endl;

    return 0;
}