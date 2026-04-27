#include <iostream>
using namespace std;

int main()
{
	int ke, m, v;
	cout << "Please enter the value of m " << endl;
	cin  >> m ;
	cout << "Please enter the value of v " << endl;
	cin  >> v ;
	ke = 0.5  * m * (v*v); // 1.0/2 or 1/2.0 is another way to do this thing 
	cout << "The value of kinetic energy is " << ke << endl;
	return 0;
}
