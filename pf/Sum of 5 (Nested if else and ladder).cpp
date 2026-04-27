#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, sum;
	cout << "Please enter the values of a, b, c, d and e respectively" << endl;
	cin  >> a >> b >> c >> d >> e;
	sum = a + b + c + d + e;
	if (a>0 && b>0 && c>0 && d>0 && e>0)
	{
		cout << "The sum of all the entered positive numbers is" << sum << endl;
		if (sum>50)
		{
		    cout << "The sum is greater than 50" << endl;
	    }
	    else if (sum<50)
	    {
	    	cout << "The sum is less than 50" << endl;
		}
		else
		{
			cout << "The sum is equal to 50" << endl;
		}
	}
	else
	{
		cout << "Some of the number is not positive" << endl;
	}
	return 0;
}
