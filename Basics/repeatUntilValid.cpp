#include <iostream>

using namespace std;

int main() {
    int input;

    cout << "Please enter a number: " << endl;
    cin >> input;

    while (input <= 0) {
        cout << "Invalid\n";
        cout << "Please enter another number: ";
        cin >> input;
    }

    cout << "Valid";
    return 0;
}


// 2.2
// 📄 File name:

// repeat_until_valid.cpp

// ✅ Task:

// Ask the user for a number

// While the number is <= 0, keep asking

// When the user finally enters a valid number (> 0):

// Print: Valid

// 📌 Rules:

// You must use a loop (while or do-while)

// Use if only if you need it

// Do not exit after first invalid input

// Keep prompting until it’s valid

// 🧠 What this tests:

// Loops + conditions

// Input validation pattern (you’ll need this for your lab)

// Example