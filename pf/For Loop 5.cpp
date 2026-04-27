//A prime number is a whole number greater than 1 with only two factors – itself and 1.
#include <iostream>
using namespace std;
int main()
{
	int n, ctr = 0;
	cout << " Please enter the value of n " << endl;
	cin  >> n;
	for(int i = 1; i <= n; i++)
	{
		if( n % i == 0)
		{
			ctr++;
		}
	}
	
	if (ctr == 2)
	{
		cout << " It is a prime number " << endl;
	}
	else 
	{
		cout << " Not a prime number " << endl;
	}
	return 0;
}
