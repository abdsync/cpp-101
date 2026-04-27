#include <iostream>
using namespace std;
int main()
{
	int u, income_tax, fp, ad, tax1, tax2;
	income_tax = 1500;
	fp = 3000;
	ad = 4000;
	tax1 = 5000;
	tax2 = 3000;
	cout << "Automated Electricity Bill Generator" << endl;
	cout << "Please enter the number of units consumed" << endl;
	cin  >> u;
	if(u>0 && u<= 100)
	{
		cout << "Your Electricity bill against" << u << " units is = "<< (25*u) + income_tax + fp + ad << " rupees " << endl;
	}
	else if(u>= 101 && u<= 200)
	{
		cout << "Your Electicity bill against " << u << " units is = " << (35*u) +income_tax + fp + ad << " rupees " << endl;
	}
	else if(u>= 201 && u<= 300)
	{
		cout << "Your Electricity bill against " << u << " units is = " << (45*u) + income_tax + fp + ad << " rupees "<< endl;
	}
	else if(u>= 301 && u<= 500)
	{
		cout << "Your Electricity bill against " << u << " units is = " << (70*u) + income_tax + fp + ad << " rupees " << endl;
	}
	else if(u>= 501 && u<= 700)
	{
		cout << "Your Electricity bill against " << u << " units is = " << (100*u) + income_tax + fp + ad + tax1 + tax2 << " rupees " << endl;
	}
	else if(u>=700)
	{
		cout << "Your Electricity bill against " << u << " units is = " << (150*u) + income_tax + fp + ad + tax1 + tax2 << " rupees " << endl;
	}
	else 
	{
		cout << "Invalid Entries !" << endl;
	}
	return 0;
}
