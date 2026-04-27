#include <iostream>
using namespace std;

void swapxy(int x, int y);
int main ()
{
    int a = 20, b= 55;
    swapxy(a, b);  //Thus actual values of a and b remain unchanged even after exchanging the values of x and y in the function.
    cout << "The formal parameter is a = "<< a << " and b = " << b << endl;
    return 0;
}
void swapxy(int x, int y)
{
	int z;  
	z = x;
	x = y;
	y = z;
	cout << "The actual parameter is x = "<< x << " and y = " << y << endl;
}


