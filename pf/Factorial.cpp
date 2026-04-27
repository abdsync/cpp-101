#include <iostream>
using namespace std;
int main()
{
	int n;
	int factorial = 1;
	int i = 1;
	cout << "Please enter the value of n"<< endl;
	cin  >> n;
	while (i<=n)
	{
		factorial = factorial * i;
		i++;
		
		
	}
	cout << "The factorial of " << n << "is " << factorial << endl;
	return 0;
}
