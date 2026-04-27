#include <iostream>
using namespace std;

int main()
{
    // Checking perfect numbers between 1 to 500 
    // Perfect numbers are those which are equal to the sum of their proper divisors (less than the number itself)
    int i = 1, n, sum;

    while (i <= 500)
    {
        n = 1;  // Reset n for the new value of i
        sum = 0;  // Reset sum for the new value of i

        while (n < i)  // Proper divisors are less than the number itself
        {
            if (i % n == 0)  // Check if n is a divisor of i
            {
                sum = sum + n;  // Add divisor to sum
            }
            n++;
        }

        if (sum == i)  // If sum of divisors equals the number
        {
            cout << i << " is a perfect number" << endl;
        }

        i++;  // Move to the next number
    }

    return 0;
}

