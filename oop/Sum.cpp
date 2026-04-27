#include <iostream>
using namespace std;
class Addition
{
	private:
		int a,b,sum;
	public:
		void input()
		{
			cout << " Enter A  " << endl;
			cin  >> a;
			cout << " Enter B  " << endl;
			cin  >> b;
		}
		void read()
		{
			sum = a + b;
		}
		void add()
		{
			cout <<" Sum =" << sum << endl;
		}
};
int main()
{
	Addition obj1, obj2;
	obj1.input();
	obj1.read();
	obj1.add();
	
	obj2.input();
	obj2.read();
	obj2.add();
	return 0;
	
}
