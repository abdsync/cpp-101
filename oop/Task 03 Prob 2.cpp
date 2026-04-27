#include <iostream>
using namespace std;
class add // specifies the class
 {
 	private:
 		int iNum1, iNum2, iNum3; // member data
 		void input (int ivar1,int ivar2) // member function 
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
		 	cout << "The sum of two numbers is" << iNum3 << endl;
		 }
	public:
		void publicinput(int iX, int iY)
		{
			input(iX, iY);
		}
		void publicsum()
		{
			sum();
		}
		void publicdisp()
		{
			disp();
		}
};
		// Main function of the program
		int main()
		{
			add A1;
			int iX, iY;
			cout << "Input two numbers" << endl;
			cin  >> iX;
			cin >> iY;
			A1.publicinput(iX, iY);
			A1.publicsum();
			A1.publicdisp();
			system("pause");
			return 0;
			
		}	  
