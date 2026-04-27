#include <iostream>
using namespace std;
class Electricity
{
	public:
	float units, cost;
	float bill()
	{
		if (units <= 100 )
		{
			cost = units * 50;		
			return cost;
		}
		else if (units >100)
		{
			cost = units * 60;
			return cost; 
		}
		else 
		{
			cout << " Entered Values found incorrect " << endl;
		}
	}
};
class More_Electricity : public Electricity
{
	public:
	void get()
	 {
	 	cout << " Please enter the units consumed " << endl;
	 	cin >> units; 
	 }
	float bill()
	{
			if ( Electricity::bill() > 250)
			{
				float surcharge = 15.0 / 100.0 * Electricity::bill(); //because here the 15 and 250 are int so would result in zero better approach is to 
				float totalbill = Electricity::bill() + surcharge;
				return totalbill;
			}
			else 
			{
				 return Electricity::bill();
			}
	}
};
int main()
{
	More_Electricity e;
	e.get();
	cout << " Bill Calculation " << endl;
	cout << "Total Bill " << e.bill() << endl;
	return 0;
	system("pause");
}
