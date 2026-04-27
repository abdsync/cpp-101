#include <iostream>
using namespace std;
int main ()
{
	int a ; 
	cout << "Please enter the value of a" << endl;
	cin  >> a ;
	if (a % 2 == 0)
	{
		cout << "The number" << a << "is even"  << endl;
	}
	else 
	{
		cout << "The number" << a << "is odd"<< endl;
	}
	return 0 ;
}
