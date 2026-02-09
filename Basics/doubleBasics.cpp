#include <iostream>

using namespace std;

int doubleValue(int num);

int main() {
    int a = 7, b;
    b = doubleValue(a);
    cout << b;
}

int doubleValue(int num){
    return num * 2;
}