#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    long elapsedSeconds = time(nullptr);
    srand(elapsedSeconds);
    int number = rand() % 10;

    cout << number;

    srand(time(nullptr));
    int number2 = rand() % 10;

    cout << number2;

    return 0;
}