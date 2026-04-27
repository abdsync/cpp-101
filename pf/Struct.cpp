#include <iostream>
#include <conio.h>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
int main()
{
	date birthdate;
	cout <<"Enter day of birth"<<endl; //enter day
	cin  >>birthdate.day;
	cout <<"Enter month of birth"<<endl; // enter month 
	cin  >>birthdate.month;
	cout <<"Enter year of birth"<<endl; // enter year 
	cin  >>birthdate.year;
	cout <<"Your date of birth is:"<<birthdate.day<<"/"<<birthdate.month<<"/"<<birthdate.year<<endl;
}

