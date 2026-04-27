#include <iostream>
using namespace std;
int main()
{
	int marks; 
	cout << " Please enter your marks to check your grades " << endl;
	cout << " If Marks are 80 to 100 enter 1 " << endl;
	cout << " If Marks are 60 to 79 enter 2 " << endl;
	cout << " If Marks are 40 to 59 enter 3 " << endl;
	cout << " If Marks are 20 to 39 enter 4 " << endl;
	cin  >> marks;
	switch(marks)
	{
		case(1):
		{
			cout << " Your Grade is A+ " << endl;
			break;
		}
		case(2):
		{
			cout << " Your Grade is A " << endl;
			break;
		}
		case(3):
		{
			cout << " Your Grade is B " << endl;
			break;
		}
		case(4):
		{
			cout << " Your Grade is F " << endl;
			break;	
		}
		default: 
		cout << " You entered something invalid " << endl;
			
	}
	return 0;
}
