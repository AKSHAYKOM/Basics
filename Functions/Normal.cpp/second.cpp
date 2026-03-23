#include <iostream>
using namespace std;

int funn(int a, int b, int c) {

    for (c = 4; c <= 8; c++) {
        a = (a + 11) + b;
        a = (c + 3) + b;
    }

    b = (5 + 10) + a;
    a = c * (10 + 8) + a;

    for (c = 2; c <= 5; c++) {
        a = (10 + c) + a;
        b = (c * 3 + 4) + a;
    }

    return a + b;
}

int main() {
    int a = 8, b = 9, c = 2;

    cout << funn(a, b, c) << endl;

    return 0;
}
