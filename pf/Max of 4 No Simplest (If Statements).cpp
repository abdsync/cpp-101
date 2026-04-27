#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Please enter the values of a, b, c and d respectively" << endl;
	cin  >> a;
	cin  >> b;
	cin  >> c;
	cin  >> d;
	int max = a; // Assuming that the value of a entered by user is maximum
	if (b>max)
	{
		max = b;
	}
	if (c>max)
	{
		max = c;
	}
	if (d>max)
	{
		max = d;
	}
	
	cout << "The maximum number is" << max << endl;
	return 0;
}
