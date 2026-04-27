#include <iostream>
using namespace std;

int main()
{
	int perimeter, length , breadth;
	cout << "Please enter the value of length" << endl;
	cin  >> length ;
	cout << "Please enter the value of breadth"<< endl;
	cin  >> breadth ;
	perimeter = 2 * (length+breadth);
	cout << "The Perimeter of rectangle is " << perimeter << endl;
	return 0 ; 
}
