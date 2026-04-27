#include <iostream>
using namespace std;
int main ()
{
	char grade;
	cout << " Please enter your respective grades to check your status "  << endl;
	cout << " The grades are as follows A, B, C, D, E " << endl;
	cin  >> grade;
	switch(grade)
	{
		case'A':
			cout << " Excellent " << endl;
			break;
		case 'B':
			cout << " Very Good " << endl;
			break;
		case 'C':
		    cout << " Good " << endl;
		    break;
		case 'D':
			cout << " Poor " << endl;
			break;
		case 'E':
			cout << " Extremely Dissatifying " << endl;
			break;
		default:
			cout << " Invalid enteries " << endl;
	}
	system("pause");
	return 0;
	
}
