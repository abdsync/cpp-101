#include <iostream>
using namespace std;
class Student
{
	int rollno, Class;
	string name;
	public:
		void getdata()
		{
			cout << " Please enter the rollno, class and name of the students respectively " << endl;
			cin >> rollno >> Class >> name; 
		}
		void putdata()
		{
			cout << " Roll no " << rollno << endl;
			cout << " Class " << Class << endl;
			cout << " Name " << name << endl;
		}
};
class Test : public Student
{
	int t1, t2, t3, s1, s2, assignment, finalmarks;
	public:
		void getmarks()
		{
			cout << " Enter marks for t1, t2, t3, s1, s2, assignment consecutively " << endl;
			cin >> t1 >> t2 >> t3>> s1 >> s2 >> assignment;
		}
		void putmarks()
		{
			cout << " Marks t1 " << t1 <<  endl;
			cout << " Marks t2 " << t2 <<  endl;
			cout << " Marks t3 " << t3 << endl;
			cout << " Marks s1 " << s1 << endl;
			cout << " Marks s2 " << s2 << endl;
			cout << " Marks assignment " << assignment << endl;
		}
		void FinalMarks()
		{
			finalmarks = t1 + t2 + t3 + s1 + s2 + assignment;
			cout << " Final Marks of student are as follows " << finalmarks << endl;
		}
};
int main()
{
	Test t;
	t.getdata();
	t.getmarks();
	t.putmarks();
	t.FinalMarks();
	t.putdata();
	return 0;
	system ("pause");
}