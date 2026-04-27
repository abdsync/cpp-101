#include <iostream>
using namespace std;

class Distance 
{
	private:
		int feet;
		float inch;
	public:
		Distance(int ft, float in): feet(ft), inch(in)
		{
		}
		void displaydistance() const
		{
			cout << " Feet = " << feet << endl;
			cout << " Inch = " << inch << endl;
		}
};
int main()
{
	const Distance Wall(200, 6.0);
	Wall.displaydistance();
	return 0;
	
}
