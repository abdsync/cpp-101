#include <iostream>
using namespace std;
int main()
{
	int s,vi,t,m,v;
	cout<<" Finding the value of S using second equation of motion "<<endl;
	cout<<" Please enter the value of vi "<<endl;
	cin>>vi;
	cout<<" Please enter the value of t "<<endl;
	cin>>t;
	cout<<" Please enter the valur of m "<<endl;
	cin>>m;
	cout<<" Please enter the value of v "<<endl;
	cin>>v;
	s= vi * t + 0.5 * m* (v * v);// In C++, dividing two integers results in integer division, so 1/2 evaluates to 0, not 0.5 as intended.
	cout<<" The Value of s is "<<s<<endl;
}
