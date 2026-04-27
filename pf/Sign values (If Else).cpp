#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout << "Please enter the value of a" << endl;
	cin  >> a;
	if(a<0)
	{
		cout << "sign is -1" << endl;
	}
	else 
	{
		if(a==0)
		{
			cout << "sign is zero" << endl;
		}
		else 
		{
			cout << "sign is set to 1" << endl;
		}
	}
	return 0;
}
