#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number (>=5): ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << " Please enter an odd number >= 5." << endl;
        return 0;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (
                (i == 0 && j >= mid) ||
 
                (i == mid) ||
                (i == n - 1 && j <= mid) ||
                (j == 0 && i <= mid) ||
                (j == n - 1 && i >= mid) ||
                (j == mid)
            )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}