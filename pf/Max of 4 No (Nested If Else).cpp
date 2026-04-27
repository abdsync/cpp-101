#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Please enter the value of a" << endl;
	cin  >> a;
	cout << "Please enter the value of b" << endl;
	cin  >> b;
	cout << "Please enter the value of c" << endl;
	cin  >> c;
	cout << "Please enter the value of d" << endl;
	cin  >> d;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout <<a<<" "<< "a is the greatest among all" << endl;
			}
			else
			{
				cout <<a<<" "<< "a is a great number but not greatest" << endl;
			}
		}
		else
		{
			if(c>d)
			{
				cout <<c<<" "<< "c is the greatest among all" << endl;
			}
			else
			{
				cout <<c<<" "<< "c is a great number but not greatest" << endl;
			}
		}
	}
	else 
	{
		if(b>c)
		{
			if(b>d)
			{
				cout <<b<<" "<< "b is the greatest among all" << endl;
			}
			else
			{
				cout <<d<<" "<< "d is the greatest among all" << endl;
 			}
		}
	}
	return 0;
}
