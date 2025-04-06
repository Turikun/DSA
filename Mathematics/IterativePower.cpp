#include<iostream>
using namespace std;

int iterativepower(int x, int y) {
    int res = 1; // Initialize result as 1
    while (y > 0) { // Loop until exponent becomes 0
        if (y % 2 != 0) { // If y is odd
            res = res * x; // Multiply res with current x
        }
        x = x * x; // Square the base
        y = y / 2; // Reduce exponent
    }
    return res; // Return the computed power
}

int main() {
    int x, y;
    cout << "Enter the Base: ";
    cin >> x;
    cout << "Enter the Power: ";
    cin >> y;
    cout << "Result: " << iterativepower(x, y) << endl;
}
