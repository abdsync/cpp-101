#include <iostream>
using namespace std;
int main ()
{
	int q;
	cout << "Please enter the values" << endl;
	cin >> q;
	
	int arr[q];
	for (int i=0; i<q; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<q-1; i++)
	{
		for(int j=i+1;j<q;j++)
		{
			if(arr[j]<arr[i])
			{
				int var= arr[j];
				arr [j] = arr[i];
				arr [i] = var;
			}
		}
	}
	for (int i=0; i<q;i++)
	{
		cout << arr[i];
	}
	
	
}
