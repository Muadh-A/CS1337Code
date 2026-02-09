#include <iostream>

using namespace std;

int add(int num1, int num2);

int main() {
    int sum;
    sum = add(3, 5);
    cout << sum;

}

int add(int num1, int num2) {
    return (num1 + num2);
}

// Goal: Understand that a function returns a value and main uses it.

// Task:

// Write a function called add that:

// Takes two ints

// Returns their sum

// In main:

// Call add(3, 5)

// Store the result in a variable

// Print the result

// No loops. No arrays. No tricks.