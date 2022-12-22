#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(nullptr));
    short first = (rand() % (maxValue - minValue + minValue)) + minValue;
    short second = (rand() % (maxValue - minValue + minValue)) + minValue;

    cout << first << ", " << second;

    return 0;
}