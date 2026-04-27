#include <iostream>
using namespace std;
class BankAccount 
{
    int accountno;
    public:
    void getaccount( int num )
    {
        accountno = num;
    }
    void displayacc()
    {
        cout << " Your Account No = " << accountno << endl;
    }
};
int main()
{
    BankAccount obj1;
    obj1.getaccount(2312403);
    obj1.displayacc();
    return 0;
}