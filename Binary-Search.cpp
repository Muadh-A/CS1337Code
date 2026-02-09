#include <iostream>

using namespace std;

//prototype
int binarySearch(int list[], int key, int low, int high);

// function main begins program execution
int main() 
{
    int list[17] = { 2, 4, 7, 10, 11, 28, 34, 45, 50, 59, 60, 66, 69, 70, 75, 89, 95 };
    
    int key, first = 0, last = 16;
    cout << "Enter the element to search: ";
    cin >> key;
    /*
    Enter your code for the function call
    if key is found output the following statement
    cout << key << "is at index " << i << endl;
    */


}

int binarySearch(int list[], int key, int low, int high)
{
    //write your code here and the two cout statements be inserted into your code whereever necessary
    cout << "It takes " << count << " iterations to find the key " << key << endl;
    cout << " After " << count << " iterations " << key << " is not found!" << endl;
}