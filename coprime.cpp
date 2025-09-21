// Write a program to check whether two given numbers are co-prime numbers or not.

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
 
    if (a == 1)
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    else
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;

    return 0;
}