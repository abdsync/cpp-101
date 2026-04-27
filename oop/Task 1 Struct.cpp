#include <iostream>
using namespace std;

struct library
{
	int bookid[3];
	int bookprice[3];
	int bookpages[3];
	void uservalues()
	{
		for (int i=0; i<3; i++)
		{
		    cout << "Please enter the book id for book " << i + 1 << endl;
			    cin  >> bookid[i];
			    cout << "Please enter the price for book " << i + 1 << endl;
			    cin  >> bookprice[i];
			    cout << "Please enter the pages for book " << i + 1  << endl;
			    cin  >> bookpages[i];
		}
	}
	void costlybook()
	{
		int max = 0;
		for (int i=0; i<3; i++)
		{
			if (bookprice[i] > max)
		{
			max = bookprice[i];
	    }	
		}
		cout << "The maximum book price is " << max << endl;
	}
};
int main()
{
	library details;
	details.uservalues();
	details.costlybook();
	return 0;
}
