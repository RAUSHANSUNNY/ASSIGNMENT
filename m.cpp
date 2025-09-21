// Write a program to calculate LCM of two numbers 
 #include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    // Step 1: Find HCF using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int hcf = a;

    // Step 2: Calculate LCM using the formula: LCM = (num1 * num2) / HCF
    int lcm = (num1 * num2) / hcf;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}