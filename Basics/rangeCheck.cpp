#include <iostream>
using namespace std;

int main() {
    int input;
    
    
    cout << "Please enter a number: ";
    cin >> input;

    while (input > 10 || input < 1) {
        cout << "Invalid" << endl;
        cout << "Please enter another number: ";
        cin >> input;
    }

    if (input >= 1 && input <= 10) {
        cout << "Valid" << endl;
    }

    return 0;
}


// ✅ Task:

// Ask the user for a number

// If the number is not between 1 and 10, it is invalid

// While the number is invalid:

// Print: Invalid

// Ask again

// When the number is finally between 1 and 10:

// Print: Valid

// 🧠 In plain English:

// Valid numbers: from 1 up to 10

// Anything less than 1 or greater than 10 is invalid

// The program should not stop until the user enters a valid number

// 📌 Rules:

// Use a loop

// Use an if if you want

// Don’t exit on first bad input

// Don’t hardcode multiple prompts outside the loop