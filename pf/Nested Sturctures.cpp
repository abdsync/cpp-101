#include <iostream>
using namespace std;

struct Address
{
	char HouseNo[25];
	char City[25];
	char PinCode[25];
};
struct Employee
{
	int id;
	char Name[25];
	float salary;
	Address Add;
};
int main()
{
	Employee E;
	cout << "Enter Employee id" << endl;
	cin  >> E.id;
	cout << " Enter Employee Name" << endl;
	cin  >> E.Name;
	cout << "Enter Employee Salary" << endl;
	cin  >> E.salary;
	cout << "Enter Employee House No" << endl;
	cin  >> E.Add.HouseNo;
	cout << "Enter Employee City" << endl;
	cin  >> E.Add.City;
	cout << "Enter Employee Pin Code" << endl;
	cin  >> E.Add.PinCode;
	cout << "All details of employees are given below" << endl;
	cout << E.id;
	cout << E.Name << endl; 
	cout << E.salary << endl;
	cout << E.Add.HouseNo  << endl;
	cout << E.Add.City << endl;
	cout << E.Add.PinCode << endl;
	
}
