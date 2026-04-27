#include <iostream>
using namespace std;
int main()
{
	int option, quantity;
	cout << " Please select from the options among the numbers 1 - 5 " << endl;
	cout << " 1: Coffee " << endl;
	cout << " 2: Tea    " << endl;
	cout << " 3: Water  " << endl;
	cout << " 4: Cola   " << endl;
	cout << " 5: Iced Tea " << endl; 
	cin  >> option;
	cout << " Also enter the quantity " << endl;
	cin  >> quantity;
	switch(option)
	{
		case(1):
			{
				cout << " Your total bill = " << 150 * quantity << endl;
			}
			break;
		case(2):
			{
				cout << " Your total bill = " << 100 * quantity << endl;
			}
			break;
		case(3):
			{
				cout << " Your total bill = " << 80 * quantity << endl;
			}
			break;
		case(4):
			{
				cout << " Your total bill = " << 120 * quantity << endl;
			}
			break;
		case(5):
			{
				cout << " Your total bill = " << 200 * quantity << " Rupees "<< endl;
			}
			break;
		default:
			{
				cout << " Your entries are invalid " << endl;
			}
			
	}
	return 0;
}
