#include <iostream>  // Include input-output stream library
using namespace std;  // Use standard namespace

// Function to print all divisors of a given number
void AllDivisorOfNumber(int number) {
    for (int i = 1; i <= number; i++) {  // Start loop from 1 (not 0) to avoid division by zero
        if (number % i == 0) {  // Check if 'i' is a divisor of 'number'
            cout << i << " ";  // Print the divisor with a space
        }
    }
    cout << endl;  // Move to the next line after printing all divisors
}

int main() {
    int number;  // Declare variable to store user input

    cout << "Enter the number: ";  // Prompt user for input
    cin >> number;  // Take input from user

    AllDivisorOfNumber(number);  // Call function to print divisors

    return 0;  // Indicate successful program termination
}
