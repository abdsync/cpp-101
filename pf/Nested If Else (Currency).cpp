#include <iostream>
using namespace std; 
int main ()
{
	char a, country ;
	cout << "Are you a human" << endl ;
	cin  >> a ;
	if (a == 'y')
	{
	    cout << "Please enter your country " << endl ;
		cin  >> country ;
		if (country == 'P')
		{
			cout << "Your currency is rupees" << endl ;
		}
		else if (country == 'U')
		{
			cout << "Your currency is ponds" << endl ; 
		}
		else if (country == 'U')
		{
			cout << "Your currency is dollar" << endl ;
		}
    }
	else 
	{
		cout << "Invalid entries" << endl ;
	}
		
}
