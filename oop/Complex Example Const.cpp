#include <iostream>
using namespace std;

class Distance {
private:
    int feet;       // Feet part of the distance
    float inches;   // Inches part of the distance

public:
    // Default constructor
    Distance() : feet(0), inches(0.0) { }

    // Parameterized constructor
    Distance(int ft, float in) : feet(ft), inches(in) { }

    // Function to input distance
    void getdist() {
        cout << "Enter feet: "; 
        cin >> feet;
        cout << "Enter inches: "; 
        cin >> inches;
    }

    // Function to display distance
    void showdist() const {
        cout << feet << "'-" << inches << "\""; 
    }

    // Declaration of add_dist function
    Distance add_dist(const Distance&) const; 
};

// Definition of add_dist function
Distance Distance::add_dist(const Distance& d2) const {
    Distance temp; // Create a temporary Distance object

    // Calculate the total inches
    temp.inches = inches + d2.inches; 

    // Check if total inches exceed 12
    if (temp.inches >= 12.0) { 
        temp.inches -= 12.0; // Adjust for excess inches
        temp.feet = 1;       // Increase feet by 1
    } else {
        temp.feet = 0; // No additional feet if inches are less than 12
    }

    // Sum the feet from both Distance objects
    temp.feet += feet + d2.feet; // Add feet without modifying them

    return temp; // Return the resulting Distance object
}

int main() {
    Distance d1; // Create first Distance object
    Distance d2; // Create second Distance object
    Distance sum; // Create a Distance object to store the sum

    d1.getdist(); // Input distance for d1
    d2.getdist(); // Input distance for d2

    sum = d1.add_dist(d2); // Call add_dist on d1, passing d2 as an argument

    cout << "Sum of distances: ";
    sum.showdist(); // Display the sum of distances

    return 0;
}

