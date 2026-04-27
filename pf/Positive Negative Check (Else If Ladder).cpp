#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Please enter the value of x and y" << endl;
	cin  >> x >> y;
	if (x>0 && y>0)
	{
		cout << " Both " << x << "and" << y << "are positive." << endl;
	}
	else if (x>0)
	{
		cout << "Only" << x << "is positive" << endl;
	}
	else if (y>0)
	{
		cout << "Only" << y << "is positive" << endl;
	}
	else 
	{
		cout << "Neither of x and y is positive" << endl;
	}
}
