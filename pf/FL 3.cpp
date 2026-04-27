#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<" Please enter the value of a ";
	cin>>a;
	
	for(int i=0; i<1; i++)
	{
		if(a%2==0)
		{
			cout<<a<<" This is an even number "<<endl;
		}
		else 
		{
			cout<<a<<" This is an odd number  "<<endl;
		}
	}
}
