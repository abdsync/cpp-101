#include <iostream>
using namespace std;
class Table
{
    private:
    int a;
    public:
    Table(int a)
    {
        this->a= a;
    }
    void print_table()
    {
        for (int i=1; i<11; i++)
        {
            cout << a << " x " << i << " = " << a * i << endl;
        }
    }
    
};
int main()
{
    int a;
    cout << " Enter value for table " << endl;
    cin  >> a; 
    Table t(a);
    t.print_table();
    return 0;
}