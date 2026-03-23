#include <iostream>
using namespace std;

int max(int a, int b) {
    int c;
    if (a > b) {
        c = a;
    } else {
        c = b;
    }
    return c;
}

int main() {
    cout << max(23, 6) << endl;
    return 0;
}
