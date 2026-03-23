#include <iostream>
using namespace std;

float aot(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    cout << aot(2.5, 5.5) << endl;
    return 0;
}