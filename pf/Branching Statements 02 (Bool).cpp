#include <iostream>
using namespace std; 

int main()
{
	int v = 0; // All other values other than 0 will be automaically true being fundamental in C++
	// Also if the argument of branching statement is in single line then we can ignore braces for if else
	if (v)
	  cout<< "v is true" <<endl;
	else 
	  cout<< "v is falsse "<<endl;
	return 0;
}
