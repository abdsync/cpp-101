#include <iostream>
using namespace std;

int sum(int n, int accumulator = 0) {
    if (n == 0) return accumulator;  // Base case
    return sum(n - 1, accumulator + n);  // Recursive call with updated sum
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers: " << sum(n) << endl;
    return 0;
}
