#include <iostream>
using namespace std;
class Time
{
	int hours; 
	int minutes; 
	public: 
	Time ()
	{
		hours = 0; 
		minutes = 0;
	}
	Time (int h, int m)
	{
		hours = h; 
		minutes = m;
	}
	void predisplay()
	{
		cout << " Prefix Display " << endl;
		cout << " H : " << hours << " " << " M : " << minutes << endl;
	}
	void postdisplay()
	{
		cout << " Postfix Display " << endl;
		cout << " H : " << hours << " " << " M : " << minutes << endl;
		
	}
	Time operator ++() // Prefix Operator Overloading
	{
		++minutes;
		if (minutes >= 60)
		{
			++hours; 
			minutes = minutes - 60;
		}
		return Time(hours, minutes);
	}
	
	Time operator ++(int) // Postfix Operator Overloading
	{
		++minutes;
		if (minutes >= 60)
		{
			++hours; 
			minutes = minutes - 60;
		}
		return Time(hours, minutes);
	}
};
int main()
{
	Time t1(11, 59);
	Time t2(9, 15);
	// Prefix 
	++t1; 
	t1.predisplay();
	++t2;
	t2.predisplay();
	// Postfix
	t1++;
	t1.postdisplay();
	t2++;
	t2.postdisplay();
	return 0;
	
}