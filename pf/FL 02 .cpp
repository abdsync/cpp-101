#include <iostream>
using namespace std;
int main()
{
	int number,a,b;
	cout<<"Please enter the integers  one by one "<<endl;
	a=5;
	b=10;
	for(int i=0; i<5; i++)
	{
		cout<<"Integer"<<i+1<<":"<<endl;
		cin>>number;
		if(number>b)
		{
			cout<<number<<"is the largest"<<endl;
		}
		if (number<a)
		{
			cout<<number<<"is the smallest"<<endl;
		}
		
	}
}
