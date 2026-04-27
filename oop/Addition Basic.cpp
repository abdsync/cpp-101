#include <iostream>
using namespace std;

class Addition 
{
	private:
		int a, b, sum;
	public:
		void input(int c, int d)
		{
			a = c;
			b = d;
		}
		void add()
		{
			sum = a + b;
		}
		void display()
		{
			cout << " SUM = " << sum << endl;
		}
};
int main()
{
	Addition a1;
	a1.input(78, 88272);
	a1.add();
	a1.display();
	return 0;
}
