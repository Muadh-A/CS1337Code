#include <iostream>

using namespace std;

int isEven(int num);

int main() {
    int number = 0, returnVal = 0;  
    cout << "Please enter a number: ";
    cin >> number;
    cout << endl;

    returnVal = isEven(number);

    if (returnVal == 1) {
        cout << "Even";
    }

    else {
        cout << "Odd";
    }

    return 0;
}

int isEven(int num) {
    
    if (num % 2 == 0) {
        return 1;
    }

    else {
        return 0;
    }
}