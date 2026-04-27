// Creating an Atm machine system to check, withdraw and deposit amount
#include <iostream>
using namespace std;
int main()
{
	int amount, totalbalance, balance, id, option;
	string name;
	balance = 78000;
	cout << " Welcome Automated Transaction Machine " << endl;
	cout << " Enter Your Full Name Without Spaces " << endl;
	cin  >> name;
	cout << " Enter Your Account ID " << endl;
	cin  >> id;
	cout << " Option 1: Check Balance  " << endl;
	cout << " Option 2: Withdraw Money " << endl;
	cout << " Option 3: Deposit Money  " << endl;
	cin  >> option;
	switch(option)
		{
			case 1:
				{
					cout << " Closing Balance =  " << balance << " Rupees "<< endl;
				}
				break;
			case 2:
				{
					cout << " Closing Balance " << balance << " Rupees " << endl;
					cout << " Enter Amout To Withdraw "  << endl;
					cin  >> amount;
					totalbalance = balance - amount;
					cout << " Withdrawl is processed " << endl;
					cout << " Account Holder: " << name << endl;
					cout << " Account ID: " << id <<  endl;
					cout << " Account Balance = " << totalbalance << " Rupees " << endl;
				}
				break;
			case 3:
				{
					cout << " Closing Balance " << balance << " Rupees " << endl;
					cout << " Enter Amount To deposit " << endl;
					cin  >> amount;
					totalbalance = balance + amount;
					cout << " Deposit Made Successfully " << endl;
					cout << " Account Holder: " << name << endl;
					cout << " Account ID: "<< id << endl;
					cout << " Account balance = " << totalbalance << " Rupees " <<  endl;	
				}
				break;
			default:
				{
					cout << " aResponse Is Incorrect " << endl;
				}
		}
		return 0;
}
