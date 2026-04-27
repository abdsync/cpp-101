#include <iostream>
using namespace std;

class People // Previously used class data it should be used because it resembles some builtin function 
{
    private:
    string name;
    int age;
    public:
    People(string n, int a)
    {
        name = n;
        age  = a;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
int main()
{
    People p1(" Hussain ", 28);
    People p2(" Haider ", 38);
    cout << " Name " << " Age " << endl;
    cout << p1.getname() << p1.getage() << endl;
    cout << p2.getname() << p2.getage() << endl;
    return 0;
}