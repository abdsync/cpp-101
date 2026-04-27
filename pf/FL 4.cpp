#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please enter numbers one by one"<<endl;
	

	for(int i=0; i<10; i++)
	{
		cout << "Number " << i+1 << " :";
        cin >> number;
		if(number%2==0)
		{
			cout<<"even"<<endl;
		}
		if(number%3==0)
		{
			cout<<"Divisible by three"<<endl;
		}
	}
}
