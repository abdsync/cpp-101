#include <iostream>
using namespace std;

class Table
{
	public:
		int a;
		Table(int z)
		{
			a = z;
		}
		~Table()
		{
			cout << " Destructor Called " << endl;
		}
		void multiply()
		{
			cout << " Table Of " << a << " : " << endl;
			for (int i=1; i<=10; i++)
			{
				cout << a * i << endl;
			}
		}
};
int main()
{
	Table t1(2);
	t1.multiply();
	return 0;
}
