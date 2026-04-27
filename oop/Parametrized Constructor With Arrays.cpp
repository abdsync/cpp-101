#include <iostream> 
using namespace std; 
class Employee 
{ 
    int id; 
    float salary; 
    string name; 
    public: 
    Employee();
    Employee(int ids, float salaries, string names);
    void display();
};
Employee :: Employee()
{
    id = 0; 
    salary = 0;
}
Employee :: Employee(int ids, float salaries, string names)
{
    id = ids;
    salary = salaries;
    name = names; 
}
void Employee:: display()
{
    cout << " Id " << id;
    cout << " Salary " << salary; 
    cout << " Name " << name; 
}
int main ()
{
    int ids;
    float salaries; 
    string names;
    Employee e[3];
    for (int i=0; i<3; i++)
    {
        cout << " Enter Id " << endl;
        cin  >> ids;
        cout << " Enter Salary " << endl;
        cin  >> salaries; 
        cout << " Enter Name " << endl;
        cin  >> names;
        e[i] = Employee(ids, salaries, names);
        e[i].display();
    }
}