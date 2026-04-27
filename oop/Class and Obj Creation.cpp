#include <iostream>
using namespace std;


class car {

public:
	// data members or attributes

	string brand;
	string model;
	int year;
	
	// Member function to display car models
	void displayinfo() {
		cout << "Brand" << brand << endl; 
		cout << "Model" << model << endl;
		cout << "Year"  << year  << endl; 
	}
	
};
int main () {
	car car1; // creating an object of class car
	
	car1.brand = "Honda";
	car1.model = "Odyssey";
	car1.year   = 2021 ;
	
	car1.displayinfo();
	
	return 0;
}
