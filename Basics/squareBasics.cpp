#include <iostream>
using namespace std;

int square(int num);

int main() {
    int x = 4, squaredValue;
    
    squaredValue = square(x);
    cout << squaredValue;
    return 0;
}

int square(int num) {
    return num * num;
}





// Goal: Prove to yourself that names don’t matter, values do. The value in main gets passed into the function, even if the names are different.

// Your task

// Create a new file: squareBasics.cpp

// Write a function called square that:

// Takes one int parameter

// Returns the square of that number

// In main:

// Declare a variable called x

// Set x to some number (e.g., 4)

// Call square(x)

// Store the returned value in a variable

// Print the result