#include <iostream>
using namespace std;
int main()
{
	int salary,finalsalary, taskcompleted;
	cout<<" Please enter your current salary ";
	cin>>salary;
	cout<<" Please enter the number of task completed ";
	cin>>taskcompleted;
	if (taskcompleted<=10);
	{
		finalsalary=salary*20;
		cout<<finalsalary;
	}
	
	  elseif (taskcompleted>10 && taskcompleted<21);
	{
		finalsalary=salary*30;
		cout<<finalsalary;
	}
	else 
	{
		cout<<"No Bonus";
	}
}
