#include <iostream>
using namespace std;

void swapxy(int& x, int& y);
int main() {
    int a = 20, b = 55;
    swapxy(a, b);
    cout << "The formal parameter is a = " << a << " and b = " << b << endl;
    return 0;
}

void swapxy(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
    cout << "The actual parameter is x = " << x << " and y = " << y << endl;
}
