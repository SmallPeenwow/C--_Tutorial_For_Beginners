#include <iostream>

using namespace std;

int main() {
    int number = 0b11111111;

    cout << number;

    int number2 = 0xff;

    cout << number2;

    // unsigned means the number can't be a negative value;
    unsigned int num = 255; 
    cout << num;

    int number3 = -255;

    cout << number3;

    return 0;
}