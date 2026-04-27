;#include <iostream>
using namespace std;
// Roll No 2312403
struct Student
{
	char* name;
	int rollNumber; 
	int * marks;
	int numSubjects;
};
Student* createStudent()
{
	Student *s = new Student;
	s->name = new char[100];
	cout << " Enter Student Name "<< endl;
	cin.ignore();
	cin.getline(s->name, 100);
	cout << " Enter roll no "<< endl;
	cin >>s->rollNumber;
	cout << " Enter Number of subjects "<< endl;
	cin>> s->numSubjects;
	s->marks = new int[s->numSubjects];
	cout << " Enter Marks for each subject "<< endl;
	for(int i=0; i < s->numSubjects; i++)
	{
		cout << " Subject " << i + 1 << endl;
		cin >> s->marks[i];
	}
	return s;
}
// Function to display student details
void displayStudent(Student* s)
{
cout << " Student Details " << endl;
cout << " Name " << s->name <<  endl;
cout << " Roll Number " << s->rollNumber <<  endl;
cout << " Marks " << endl;
for (int i=0; i<s->numSubjects; i++)
{
	cout << s->marks[i]<< "";
 }
 cout << endl;

}
// Function to calcualte average marks
double calculateAverage(Student *s)
{
	int sum = 0;
	for (int i=0; i<s->numSubjects; i++)
	{
		sum += s->marks[i];
	}
	return (s->numSubjects >0) ? (double)sum/ s->numSubjects: 0;

}
// Function to delete student and free the memory 
void deleteStudent (Student *s)
{
	delete[] s->name;
}
int main()
{
	int numStudents;
	cout << " Enter the no of students" << endl;
	cin >> numStudents;
	
	Student** students = new Student*[numStudents];
	for (int i=0; i<numStudents; i++)
	{
		cout << " Enter details of students " << i+1<< endl;
		students[i] = createStudent();
	}
	cout << " Displaying student details" << endl;
	for (int i=0; i<numStudents; i++)
	{
		displayStudent(students[i]);
		cout << "Average marks " << calculateAverage(students[i])<< endl;
	}
// Cleaning or freeing up the memory taken 
for(int i=0; i<numStudents; i++)
{
	deleteStudent(students[i]);
}
delete[] students;
cout << " Memory Freed " << endl;
return 0;
}
