#include <iostream>
using namespace std;
// Using opt overloading to increment and decrement one operand
class Test
{
	int a;
	public: 
	Test()
	{
		a = 0;
	}
void operator ++()
{
	a++;
}
void operator --()
{
	a--;
}
void display()
{
	cout << " a = " << a << endl;
}
};
int main()
{
Test t;
++ t;
t.display();
-- t;
t.display();
return 0;		
}