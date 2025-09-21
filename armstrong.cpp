// Write a program to print all Armstrong numbers under 1000
 #include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int num = 1; num < 1000; ++num) {
        int original = num;
        int sum = 0;

        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;  
            temp /= 10;
        }

        if (sum == original) {
            cout << original << " ";
        }
    }

    cout << endl;
    return 0;
}