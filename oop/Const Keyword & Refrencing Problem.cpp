#include <iostream>
using namespace std;
class Distance 
{
	private: 
	int feet;
	float inch;
	public:
		Distance(): feet(0), inch(0.0);
		Distance(int ft, float in): feet(ft), inch(in);
		void data() 
		{
			cout << " Please enter the value of feet " << endl;
			cin  >> feet;
			cout << " Please enter the value of inch " << endl;
			cin  >> inch;
		}
		void display()
		{
			cout << " Feet = " << feet;
			cout << " Insh = " << inch;
		}
		Distance add_data(const Distance & ) const;
};
Distance Distance::add_data(const Distance& d2)
{
	distance temp;
	temp.inch = inch + d2.inch;
	if (temp.inch > 12)
	{
		temp.inch = temp.inch - 12.0;
		temp.feet = 1;
	}
	temp.feet = temp.feet + (feet + d2.feet);
 } 
 int main()
 {
 	Distance d1;
 	Distance d2; 
 	Distance sum;
 	d1.data();
 	d2.data();
 	d1.data();
 	d2.display();
 	d1.add_data(d2);
 	return 0;
 }
