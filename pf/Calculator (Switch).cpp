// Create an operator in C++ where you can perform the operations on three inputs
#include <iostream>
using namespace std;
int main()
{
	char opt; // cannot use reserved keyword operator instead use oper or opt
	int no1, no2, no3,sum, div, mul, sub;
	cout << " Please enter the respective operator " << endl;
	cout << " Operators are +, -, /, * " << endl;
	cin  >> opt;
	switch (opt)
	{
		case '+':
			{
				cout << " Please enter the values of three numbers " << endl;
	            cin  >> no1 >> no2 >> no3;
	            sum = no1 + no2 + no3;
	            cout << " Your sum = " << sum << endl;
			}
			break;
		case '-':
			{
				cout << " Please enter the values of three numbers " << endl;
	            cin  >> no1 >> no2 >> no3;
	            sub = no1 - no2 - no3;
	            cout << " Your subtraction = " << sub << endl;
			}
			break;
		case '*':
			{
				cout << " Please enter the values of three numbers " << endl;
	            cin  >> no1 >> no2 >> no3;
	            mul = no1 * no2 * no3;
	            cout << " Your multiplication = " << mul  << endl;
			}
			break;
		case '/':
			{
				cout << " Please enter the values of three numbers " << endl;
	            cin  >> no1 >> no2 >> no3;
	            div = no1 / no2 / no3;
	            if(no2!=0)
	            {
	            	if(no3!=0)
	            	{
	            		cout << " Your division = " << div << endl;
					}
				}
			}
			break;
	}
	system("pause");
	return 0;
	
}
