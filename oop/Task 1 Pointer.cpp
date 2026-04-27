#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Please enter the value of a" << endl;
	cin  >> a;
	cout << "Please enter the value of b" << endl;
	cin  >> b;
	int *aptr = &a;
	int *bptr = &b;
	*aptr = *aptr + 10; // Now it is actually adding to the value using pointers
	*bptr = *bptr + 10;
	cout << "The value of a is " <<*aptr << endl;
	cout << "The value of b is " <<*bptr << endl;
	
	return 0;
}
