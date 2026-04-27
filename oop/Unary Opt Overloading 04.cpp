#include <iostream>
using namespace std;
class counter
{
	int a;
	public:
		counter()
		{
			a = 0;
		}
		int operator++()
		{
			a++;
			return a;
		}
		int operator++(int)
		{
			a++;
			return a;
		}
		int getvalue()
		{
			return a-1;
		}
	
};
int main()
{
	counter c;
	++c; // Preincrement 
	c++; // Postincrement
	
	for (int i=1; i<=10; i++)
	{
		cout << c.getvalue() << " * " << i << " " << c.getvalue() * i << endl;
	}
}