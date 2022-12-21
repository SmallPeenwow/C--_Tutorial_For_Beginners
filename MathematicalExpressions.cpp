#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 3;

    int z = x + y;
    cout << z;

    int z = x - y;
    cout << z;
    
    int z = x * y;
    cout << z;
    
    int z = x % y;
    cout << z;


    double x2 = 10;
    int y2 = 3;

    double z2 = x2 / y2;
    cout << z2;

    // increment
    int x3 = 10;

    x3++;

    cout << x3;

    int y3 = x3++;
    cout << y3;

    int z3 = ++x3;
    cout << z3;

    return 0;
}