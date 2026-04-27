#include <iostream>
using namespace std;
class Addition 
{
	int a , b;
	public:
		void get ()
		{
			cout << " Enter a " << endl;
			cin  >> a;
			cout << " Enter b " << endl;
			cin  >> b;
		}
		void display()
		{
			cout << " Sum of a = " << a << endl;
			cout << " Sum of b = " << b << endl;
		}
		Addition operator + (Addition a2) // Here a2 is the explicit object 
		{
			Addition a3;
			a3.a = a + a2.a;
			a3.b = b + a2.b;
			return a3;
		}
};
int main()
{
	Addition a1, a2, a3;
	a1.get();
	a2.get();
	a3 = a1 + a2;
	a3.display();
	system("pause");
	return 0;
	
	
}