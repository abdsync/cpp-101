#include <iostream>
using namespace std;

class Addition
{
	private:
		int x, y, sum;
		void input (int a, int b) // Declaring Member Function As Private
		{
			x = a;
			y = b;
		}
		void add()
		{
			sum = x + y;
		}
		void display()
		{
			cout << " SUM  = " << sum << endl; 
		}
	public:
		void inputp(int d, int e) // Calling Private Member Functions Into Public Functions
		{
			input(d, e);
		}
		void addp()
		{
			add();
		}
		void displayp()
		{
			display();
		}
};
int main()
{
	Addition a1;
	int d ,e;
	cout << " Please enter value of D & E " << endl;
	cin  >>  d >> e;
	a1.inputp(d, e);
	a1.addp();
	a1.displayp();
	return 0;
	system ("pause");
}
