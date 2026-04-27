#include <iostream>
using namespace std;
class point 
{
	public:
		int a, b;
		point(int x, int y)
		{
			a = x; 
			b = y;
		}
		void display()
		{
			cout << " A and B are " << a << b << endl;
		}
	
};
int main()
{
	point rec(5, 10);
	rec.display();
	return 0;
	
}
