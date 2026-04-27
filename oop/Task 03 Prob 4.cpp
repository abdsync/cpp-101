#include <iostream>
using namespace std;

class subtraction
{
	private: 
	int x, y, z;
	public:
	    void getdata(int a,int b)
		{
			x = a;
			y = b;
		}
		void subtract()
		{
			z = x - y;
		}
		void display()
		{
			cout << "The result of subtraction is " << z << endl;
		}
};
int main()
{
	int d, e;
	subtraction object;
	cout << "Please enter the first number " << endl;
	cin  >> d;
	cout << "Please enter the second number " << endl;
	cin  >> e;
	object.getdata(d, e);
	object.subtract();
	object.display();
	return 0;
}
