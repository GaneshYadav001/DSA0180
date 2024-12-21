#include <iostream>
#include <unordered_set>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappyNumber(int n) {
    unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = sumOfSquares(n);
    }

    return n == 1;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isHappyNumber(number)) {
        cout << number << " is a Happy Number!\n";
    } else {
        cout << number << " is not a Happy Number.\n";
    }

    return 0;
}
