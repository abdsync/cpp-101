#include <iostream>
using namespace std;
int out(int x);
int main()
{
	int final_val = out(1) || out(0);
	
	cout<< "Final value is" << final_val <<endl;
	
	return 0;
}
int out(int x)
	{
		cout << "Called with value :" << x << endl;
		return x;
	}
