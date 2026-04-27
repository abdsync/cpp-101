#include <iostream>
using namespace std;

int main()
{
	int marks ;
	cout << "Please enter your marks" << endl ;
	cin  >> marks ;
	if (marks >= 85)
	{
		cout << "Your Grade is A" << endl ;
	}
	else if (marks >= 75 && marks <=84)
	{
		cout << "Your Grade is B" << endl ;
	}
	else if (marks >= 65 && marks <= 74)
	{
		cout << "Your Grade is C" << endl ;
	}
	else if (marks >= 55 && marks <= 64)
	{
		cout << "Your Grade is C-" << endl ;
	}
	else 
	{
		cout << "You are Fail, Try Agian" << endl ;
	}
}

