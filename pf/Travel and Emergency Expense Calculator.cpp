#include <iostream>
using namespace std;
int main()
{
	string weather, sunny, rainy, snowy, windy;
	int budget, calculate1, calculate2, calculate3;
	cout << "Welcome To Travel Planner And Emergency Budget Calculator" << endl;
	cout << "Please enter the current weather in your city" << endl;
	cout << "Choose from the list of sunny, rainy e.t.c" << endl;
	cin  >> weather;
	if (weather == "sunny")
	{
		cout << "Please enter your respective budget for vacation" << endl;
		cin  >> budget;
		if (budget>2000)
		{
			calculate1 = 15.0/100 * budget;
			calculate2 = calculate1;
			cout << "Your destination is Niagara Falls or Maldives for luxury stays" << endl;
		    cout << "Your Emergency Expense = " << calculate2 << endl;
		}
		else if (budget >1000 && budget <= 2000)
		{
			calculate1 = 12.0/100 * budget;
			calculate2 = calculate1;
			cout << "Your destination is Disneyland or Miami Beach" << endl;
			cout << "Your Emergency Expense = " << calculate2;
		}
		else if (budget <= 1000)
		{
			calculate1 = 10.0/100 *budget;
			calculate2 = calculate1;
			cout << "Your destination is Local Beach or Amusement Park" << endl;
			cout << "Your Emergency Expense = " << calculate2;
		}
	}   
	else if (weather == "rainy")
	{
		cout << "Please enter your respective budget for vacation" << endl;
		cin  >> budget;
		if (budget >1500)
		{
		    calculate1 = 20.0/100 *budget;
		    calculate2 = calculate1;
		    cout << "Your destination is Paris or Tokyo" << endl;
			cout << "Your Emergency Expense = " << calculate2;
		}
	    else if (budget >500 && budget <= 1500)
		{
			calculate1 = 18.0/100 * budget;
			calculate2 = calculate1;
			cout << "Your destination is Fiji" << endl;
			cout << "Your Emergency Expense = " << calculate2;
		}
		else if (budget <= 500)
		{
			calculate1 = 12.0/100 *budget;
			calculate2 = calculate1;
			cout << "Your destination is Jakarta" << endl;
			cout << "Your Emergency Expense = " << calculate2;
		}
	}
	else 
	{
		cout << "Invalid Entries " << endl;
	}
return 0;	
}
