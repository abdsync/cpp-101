#include <iostream>
using namespace std;
class Complex //Checking whether the values inside the objects are equal or not 
{
	int a;
	public:
		void get()
		{
			cin  >> a;
		}
	void operator ==(Complex c2)
	{
		if (a == c2.a) // Explicit Object OR Outside Object 
		{
			cout << " Both a are equal " << endl;
		}
		else
		{
			cout << " a's are not equal " << endl;
		}
	}
		
};
int main()
{
	Complex c1, c2;
	cout << " Enter a of Object 1 " << endl;
	c1.get();
	cout << " Enter a of Object 2 " << endl;
	c2.get();
	c1 == c2; // Comparing both user defined data types 
	return 0;
	system("pause");
}