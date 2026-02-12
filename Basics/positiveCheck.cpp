#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Please enter a number: ";
    cin >> input;

    if (input <= 0) {
        cout << "Invalid input";
    }

    else {
        cout << "Number is a positive valid number";
    }

    return 0;
}