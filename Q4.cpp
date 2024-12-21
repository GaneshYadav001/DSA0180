#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
