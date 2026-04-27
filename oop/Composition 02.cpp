#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = month = year = 0;
    }
    // Setters
    void setday(int day)
    {
        this->day = day;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    void setyear(int year)
    {
        this->year = year;
    }
    // Getters
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }
};

class Employee
{
    Date doj; // Date of Joining
    Date dob; // Date of Birth

public:
    // Setters for Date of Joining and Date of Birth
    void setdoj(int day, int month, int year)
    {
        doj.setday(day);
        doj.setmonth(month);
        doj.setyear(year);
    }
    void setdob(int day, int month, int year)
    {
        dob.setday(day);
        dob.setmonth(month);
        dob.setyear(year);
    }

    // Display
    void display()
    {
        cout << "Date of Joining: " << doj.getday() << "/" << doj.getmonth() << "/" << doj.getyear() << endl;
        cout << "Date of Birth: " << dob.getday() << "/" << dob.getmonth() << "/" << dob.getyear() << endl;
    }

    // Check if the employee joined within the last 5 years
    void testdoj(int currentYear)
    {
        int result = currentYear - doj.getyear();
        if (result <= 5)
        {
            cout << "The Employee joined the organization within the last five years." << endl;
        }
        else
        {
            cout << "The Employee joined the organization more than five years ago." << endl;
        }
    }

    // Check if the employee is younger than 40
    void testdob(int currentYear)
    {
        int age = currentYear - dob.getyear();
        if (age < 40)
        {
            cout << "Employee's age is less than 40 years." << endl;
        }
        else
        {
            cout << "Employee's age is 40 years or older." << endl;
        }
    }
};

int main()
{
    Employee e;

    // Setting dates
    e.setdob(1, 1, 1985); // Date of Birth: 1st Jan 1985
    e.setdoj(15, 6, 2018); // Date of Joining: 15th June 2018

    // Display details
    e.display();

    // Check conditions
    int currentYear;
    cout << "Please Enter Current Year: ";
    cin >> currentYear;

    e.testdoj(currentYear);
    e.testdob(currentYear);

    return 0;
}
