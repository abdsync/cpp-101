#include <iostream>
using namespace std;
class add // specifies the class
 {
 	private:
 		int iNum1, iNum2, iNum3; // member data
 		add()
 		{
 			cout << "Private constuctor being called" << endl;
		 }
 		
 	public:
 		
 		static add objectcreation()
 		{
 			return add();
		 }
 		void input (int ivar1, int ivar2) // member function 
 		{
 			cout << "Functions to assign values to the member data" << endl;
 			iNum1 = ivar1;
 			iNum2 = ivar2;
		 }
		 void sum() // member function 
		 {
		 	cout << "Functions to find the sum of two numbers" << endl;
		 	iNum3 = iNum1 + iNum2;
		 }
		 void disp() // member function 
		 {
		 	cout << "The sum o ftwo numbers is" << iNum3 << endl;
		 }

};
		// Main function of the program
		int main()
		{
			add A1 = add::objectcreation();
			int iX, iY;
			cout << "Input two numbers" << endl;
			cin  >> iX;
			cin >> iY;
			A1.input(iX, iY);
			A1.sum();
			A1.disp();
			system("pause");
			
			
		}	  
