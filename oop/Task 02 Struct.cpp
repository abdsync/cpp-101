#include <iostream>
using namespace std;
struct employee
{
	int code[3];
    string name[3];
    int day[3];
    int month[3];
    int year[3];
	void userinput()
	{
		for (int i=0; i<3; i++)
		{
			cout << "Please enter the code of employee " << i + 1 << endl;
			cin  >> code[i];
			cout << "Please enter the name of employee " << i + 1 << endl;
			cin  >> name[i];
			cout << "Please enter the day of joining for employee " << i + 1 << endl;
			cin  >> day[i];
			cout << "Please enter the month of joining for employee  " << i + 1 << endl; 
			cin  >> month[i];
			cout << "Please enter the year of joining for employee " << i + 1 << endl;
			cin  >> year[i];
		}
	}
	void displayfunc()
	{
		int  currentday;
		int currentmonth;
		int currentyear;
		int tenure;
		cout << "Please enter the current day " << endl;
		cin  >> currentday;
		cout << "Please enter the current month " << endl;
		cin  >> currentmonth;
		cout << "Please enter the current year " << endl;
		cin  >> currentyear; 
		for (int i=0; i<3; i++)
		{
			tenure = currentyear - year[i];
			if (tenure == 3)
			{
				cout << "The tenure is equal to 3 years " << endl;
				cout << name[i] << endl;
			}
			if (tenure >3)
			{
					cout <<"The tenure is more than 3 years " << endl;
					cout << name[i] << endl;
			}
			
		}
		
	}
	
};
int main()
{
	employee details;
	details.userinput();
	details.displayfunc();
	return 0;
	
}
