#include <iostream>
using namespace std;
int main()
{
	int z;
	cout << "Please enter the value of z" << endl;
	cin  >> z;
	if(z%5 == 0 && z%8 == 0)
	{
		cout << "The number is both divisible by 5 and 8" << endl;
	}
	else if(z%8 == 0) 
	{
		cout << "The number is only divisible by 8" << endl;
	}
	else if(z%5 == 0)
	{
		cout << "The number is only divisible by 5" << endl;
	}
	else 
	{
		cout << "The entered number is not divisible by either 8 or 5" << endl;
	}
	return 0;
}
