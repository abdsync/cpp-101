#include <iostream>
using namespace std;
class Location
{
	int x, y;
	public:
		Location()
		{
			x = y =  0;
		}
		// Setters 
		void setx(int x)
		{
			this->x = x;
		}
		void sety(int y)
		{
			this->y = y;
		}
		// Getters
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
	
};
class Person 
{
	int id;
	string name;
	Location loc;
	public:
	Person()
	{
		id = 0;
	}
	// Setters 
	void setid( int id)
	{
		this->id = id;
	}
	void setname(string name)
	{
		this->name = name;
	}
	void setLocation( int x, int y)
	{
		loc.setx(x);
		loc.sety(y);
	}
	// Getters
	int getid()
	{
		return id;
	}
	string getname()
	{
		return name;
	}
	Location getlocation ()
	{
		return loc;
	}
	void dispaly()
	{
		cout << " ID = " << id << endl;
		cout << " Name = " << name << endl;
		cout << " Location " << loc.getx() <<  " " << loc.gety() << endl;
	}
};
int main()
{
	Person p;
	p.setid(23);
	p.setname("Abdullah");
	p.setLocation(12, 33);
	p.dispaly();
	system("pause");
	return 0;
	
}