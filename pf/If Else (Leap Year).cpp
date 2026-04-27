#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Please enter your year" << endl ;
	cin  >> year ;
	if (year % 4 == 0)
	{
		cout << "This year is a leap year" << endl ;
	}
	else 
	{
		cout << "This is not a leap year"  << endl ;
	}
	return 0 ;
}
                      // Checking leap year 
