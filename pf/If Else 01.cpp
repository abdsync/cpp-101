// Write a C++ program to compute the sum of two given integer values.
// If the two values are the same, then return triple their sum. 
#include <iostream>
using namespace std;
int main()
{
	int a, b, sum;
	cout << "Please enter the values of a and b respectively" << endl;
	cin  >> a >> b;
	sum = a + b;
	if (a == b)
	{
		cout << "The values are same and their triple sum is = " << sum * 3 << endl;
	}
	else 
	{
		cout << "The sum of a and b is = " << sum << endl;
	}
	return 0;
	
}
