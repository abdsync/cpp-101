#include <iostream>
using namespace std ;
int main()
{
	string decision, country ;
	cout << "Are you a human ?" << endl ;
	cout << "Please enter yes or no"  << endl ;
	cin  >> decision ;
	if (decision == "yes")
	{
		cout << "Please enter your country name from the options below" << endl ;
		cout << "Pakistan, Banglades, Japan, Korea, Canda, UnitedStates, Somalia " << endl  ;
		cin  >> country ;
		if (country == "Pakistan")
		{
			cout << "Your currency is Rupees" << endl ; 
		}
		else if (country == "Bangladesh")
		{
			cout << "Your currency is Takka" << endl ;
		}
		else if (country == "Japan")
		{
			cout << "Your currency is Japanese Yen" << endl ;
		}
		else if (country == "Korea")
		{
			cout << "Your currency is South Korean Won" << endl ;
		}
		else if (country == "Canada")
		{
			cout << "Your currency is Candian Dollar" << endl ;
		}
		else if (country == "UnitedStates") // cin function reads the value until space occurs
		                                     // so it does read united but not states, hence written combined
		{
			cout << "Your currency is Dollar" << endl ;
		}
		else if (country == "Somalia")
		{
			cout << "Your currency is Somalian Shilling" << endl ;
		}
	}
	else 
	{
		cout << "Invalid Enteries" << endl ;
	}	
}
