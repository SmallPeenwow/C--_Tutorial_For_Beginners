#include <iostream>

using namespace std;

int main() {
    int number = 1'000'000;
    short another = number;

    cout << another;

    short number2 = 100;
    int another2 = number2;

    cout << another2;

    return 0;
}