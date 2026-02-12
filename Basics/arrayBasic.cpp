#include <iostream>
using namespace std;
int main() {
    int numbers[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
} 



// ✅ Task:

// Declare an integer array of size 5

// Ask the user to enter 5 numbers

// Store them in the array

// Then print them back out, one per line or space-separated

// 🧠 In plain English:

// You’re practicing:

// Declaring an array

// Using a loop to fill it

// Using a loop to print it

// 📌 Rules:

// Use a loop to input (no copy-paste 5 times)

// Use a loop to output

// Do not sort

// Do not use functions yet

// Just main()