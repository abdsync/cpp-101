#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Please enter the value of a, b and c one by one" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a>b)
	{
		if (a>c)
		{
			cout << "A is the greatest" << endl;
		}
		else 
		{
			cout << "C is the greatest" << endl;
		}
	}
	else 
	{
		if (b>c)
		{
			cout << "B is the greatest" << endl;
		}
		else 
		{
			cout << "C is the greatest" << endl;
		}
	}
}
