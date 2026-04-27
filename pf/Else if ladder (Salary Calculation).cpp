#include <iostream>
using namespace std; 

int main()
{
	cout << "Your'e Welcome to Salary Calculation System" << endl ;
	int tasks, initial_salary , final_salary, bonus, formula ;
	cout << "Please enter the Initial Salary" << endl ;
	cin  >> initial_salary ;
	cout << "Please enter the number of tasks completed" << endl ;
	cin  >> tasks ;
	if (tasks >= 10)
	{
		cout << "You are awarded a bonus of 10% " << endl ;
		formula = 10.0 / 100 * initial_salary ;
		bonus = initial_salary + formula ; 
		final_salary = bonus ;
		cout << "Your final salary is = " << final_salary << "Rupees" << endl ;
		
	}
	else if (tasks >= 7 && tasks < 10)
	{
		cout << "You are awarded a bonus of 7% "  << endl ;
		formula = 7.0 / 100 * initial_salary ;
		bonus = initial_salary + formula ;
		final_salary = bonus ; 
		cout << "Your final salary is = " << final_salary << "Rupees" << endl ;
	}
	else if (tasks >= 5 && tasks <7)
	{
		cout << "You are awarded a bonus of 5% " << endl ;
		formula = 5.0 / 100 * initial_salary ; 
		bonus = initial_salary + formula ; 
		final_salary = bonus ;
		cout << "Your final salary is = "  << final_salary << "Rupees" << endl ;
	}
	else if (tasks > 0 && tasks <= 5)
	{
		cout << "You have been awarded no bonus on your salary" << endl ;
		cout << "Your final salary is " << initial_salary << "Rupees" << endl ;
	}
	else 
	{
		cout << "Invalid entries" << endl ;
	}
}
