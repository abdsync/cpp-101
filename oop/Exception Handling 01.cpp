#include <iostream>
using namespace std;
int mian()
{
	int FirstValue, SecondValue;
	cout << " Enter the first and second values " << endl;
	cin >> FirstValue >> SecondValue;
	int ConditionVariable;
	ConditionVariable = FirstValue > SecondValue ? 0 : 1;
	try 
	{
		if (ConditionVariable  == 0)
		{
			cout << " Subtraction (FirstValue - SecondValue) = "
			<< FirstValue - SecondValue; 
		}
		else 
		{
			throw(ConditionVariable);
		}
		catch (int thrownValue)
		{
			cout << "Exception caught condition variable = "<< thrownvalue << endl;
		}
	}
	return 0;
}