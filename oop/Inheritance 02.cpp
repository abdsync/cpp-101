#include <iostream> 
using namespace std;
class Simple // We would specify that if the conditon is met then we would be calling the the fucntion from the base class using
// resolution :: operators and specific class name
{
	public:
		int num1, num2;
		int add()
		{
			return num1 + num2;
		}   
		int sub()
		{
			return num1 - num2;
		}       
		int mul()
		{
			return num1 * num2;
		}
		int div()
		{
			return num1/num2;
		}
};
class Complex : public Simple
{
	public:
		int result;
	void getdata()
		{
			cout << " Enter Values num1 and num2 " << endl;
			cin >> num1 >> num2;
		}
	int add()
	{
		if ( num1 >0 && num2>0)// adding the Simple:: add() will remove recursion from here telling that we are calling the function from
		// base class of the same name i.e overriding
		{
			return Simple::add();
		}
		
		else 
		{
			cout << " Not possible " << endl;
			return 0;
		}
	}
	int sub()
	{
		if ( num1 >0 && num2>0)
		{
			return Simple::sub();
		}
		else 
		{
			cout << " Not possible " << endl;
			return 0;
		}

	}
	int mul()
	{
		if ( num1 >0 && num2>0)
		{
		   return Simple::mul(); 
		}
		else 
		{
			cout << " Not possible " << endl;
			return 0;
		}

	}
	int div()
	{
		if ( num1 >0 && num2>0)
		{
			return Simple:: div();
		}
		else 
		{
			cout << " Not possible " << endl;
			return 0;
		}

	}

};
int main()
{
	Complex c;
	c.getdata();
	cout << " Sum " << c.add() << endl;
	cout << " Sub " << c.sub() << endl;
	cout << " Mul " << c.mul() << endl;
	cout << " Div " << c.div() << endl;
	return 0;
	system ("pause");
}