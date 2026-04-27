#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;  // Base case
    return (n % 10) + sumOfDigits(n / 10);  // Recursive call after processing last digit
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    return 0;
}
