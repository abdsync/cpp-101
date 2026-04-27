#include <iostream>
using namespace std;

int main() {

	int y;
	y = 2147483648;
	cout << "The Value is " << y << endl;


	double f;
	f = 3.40282e+38;
	cout << "float" << f << endl;

	char x = 'A';
	cout << "Value of variable = " << x << endl;
	cout << "Converted to int  = " << (int) x << endl;
	cout << "Adding 1 = " << (char) (x + 1) << endl;
	return 0;
}


	


