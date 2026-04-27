#include <iostream>
#include <string>
using namespace std;

class Package {
public:
    string name, city, state;
    int address, zip;
    double weight, costPerUnit;

    // Constructor to initialize weight and cost per unit
    Package(double w, double c) {
        if (w > 0 && c > 0) {
            weight = w;
            costPerUnit = c;
        } else {
            weight = 0;
            costPerUnit = 0;
            cout << "Invalid weight or cost per unit." << endl;
        }
    }

    // Function to input sender details
    void getSenderData() {
        cout << "Please enter sender details:" << endl;
        cin >> name >> city >> state >> address >> zip;
    }

    // Function to input receiver details
    void getReceiverData() {
        cout << "Please enter receiver details:" << endl;
        cin >> name >> city >> state >> address >> zip;
    }

    // Function to display sender details
    void displaySenderData() const {
        cout << "Sender Data:" << endl;
        cout << name << " " << city << " " << state << " " << address << " " << zip << endl;
    }

    // Function to display receiver details
    void displayReceiverData() const {
        cout << "Receiver Data:" << endl;
        cout << name << " " << city << " " << state << " " << address << " " << zip << endl;
    }

    // Function to calculate cost
    virtual double calculateCost() const {
        return weight * costPerUnit;
    }
};

class TwoDayPackage : public Package {
public:
    double flatFee;

    // Constructor to initialize flat fee and call base class constructor
    TwoDayPackage(double f, double w, double c) : Package(w, c), flatFee(f) {}

    // Override calculateCost to include flat fee
    double calculateCost() const override {
        return (weight * costPerUnit) + flatFee;
    }
};

class OvernightPackage : public Package {
public:
    double feePerOunce;

    // Constructor to initialize fee per ounce and call base class constructor
    OvernightPackage(double fee, double w, double c) : Package(w, c), feePerOunce(fee) {}

    // Override calculateCost to include fee per ounce
    double calculateCost() const override {
        return (weight * (costPerUnit + feePerOunce));
    }
};

int main() {
    double w, c, f, fee;

    // Input for standard package
    cout << "Please enter weight and cost per unit for standard delivery: ";
    cin >> w >> c;
    Package p(w, c);
    cout << "Standard delivery cost: " << p.calculateCost() << endl;

    // Input for two-day package
    cout << "Please enter flat fee for two-day delivery: ";
    cin >> f;
    TwoDayPackage tp(f, w, c);
    cout << "Two-day delivery cost: " << tp.calculateCost() << endl;

    // Input for overnight package
    cout << "Please enter fee per ounce for overnight delivery: ";
    cin >> fee;
    OvernightPackage op(fee, w, c);
    cout << "Overnight delivery cost: " << op.calculateCost() << endl;

    return 0;
}
