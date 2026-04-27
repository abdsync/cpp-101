// Input the age of the person, and determine the price:
// - Age < 13: Child ticket ($5)
// - 13 = Age < 60: Regular ticket ($10)
// - Age = 60: Senior ticket ($7)
#include <iostream>
using namespace std;
int main()
{
	int age, price1, price2, price3;
	price1 = 5;
	price2 = 10;
	price3 = 7;
	cout << "Welcome to Cinema Ticket Management" << endl;
	cout << "Please enter your age" << endl;
	cin  >> age;
	if (age < 13)
	{
		cout << "Your ticke price is = " << price1 << "Dollar" << endl;
	}
	else if (age >= 13 && age < 60)
	{
		cout << "Your ticket price is = " << price2 << "Dollar" << endl;
	}
	else if (age >= 70)
	{
		cout << "Your ticket price is = " << price3 << "Dollar" << endl;		
	}
	else 
	{
		cout << "Invalid Entries" << endl;
	}
}
