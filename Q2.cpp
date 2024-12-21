#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    
    if (number % 3 == 0) {
        cout << number << " is divisible by 3." << endl;
    } else {
        cout << number << " is not divisible by 3." << endl;
    }

    return 0;
}