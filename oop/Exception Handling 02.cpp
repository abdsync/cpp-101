#include <iostream>
using namespace std;
void Subtract(int FirstValue, SecondValue)
{
	cout << " Inside functin Subtract " << endl;
	try
	{
		if (FirstValue == 0)
		throw FirstValue;
		else 
		cout << "Subtraction = " << FirstValue - SecondValue << endl; 
	}
	catch (int)
	{
		cout << " Caught null  value ";
		throw;
	}
	cout << " End of subraction function " << endl;
}
int main()
{
	cout << "Inside F"
}