#include <iostream>
using namespace std;
class Circle
{
    private:
    static float pi;
    float r;
    public: 
    Circle(float r)
    {
        this->r = r ;
    }
    float calculate()
    {
        return 2 * pi * r;
    }
};
float Circle:: pi = 3.14;
int main()
{
    float r;
    cout << " Enter r " << endl;
    cin >> r;
    Circle c(r);
    cout << " Circumference  = " << c.calculate() << endl;
    return 0;
}