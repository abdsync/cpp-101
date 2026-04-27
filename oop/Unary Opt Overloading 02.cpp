#include<iostream>
using namespace std;
class Time
{
private:
int hours; // 0 to 23
int minutes; // 0 to 59
public:
Time()
{
hours = 0;
minutes = 0;
}
Time(int h, int m)
{
hours = h;
minutes = m;
}
// method to display
void displaytime()
{
cout<<"H: "<<hours;
cout<<" M: "<<minutes<<endl;
}
// overloaded prefix ++
Time operator++ ()
{
++minutes;// increment this object
if(minutes >= 60)
{
++hours;
minutes -= 60;
}
return Time(hours, minutes);
}
// overloaded postfix ++
Time operator++( int )
{
// save the orignal value
// increment this
++minutes;
if(minutes >= 60)
{
++hours;
minutes -= 60;
}
return Time(hours, minutes);
}
};
int main()
{
Time T1(11, 59);
Time T2(10,40);
++T1;
T1.displaytime();
++T2;
T2.displaytime(); // T1 and T2 values will be same here 
// Postfix Increment 
T1++;
T1.displaytime();
T2++;
T2.displaytime();
system("pause");
}