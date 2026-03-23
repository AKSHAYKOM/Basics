#include <iostream>
using namespace std;

double absoluteValue(double n);

int main() {
    double n;

    cin >> n;

    cout << absoluteValue(n) << endl;

    return 0;
}

double absoluteValue(double n) {
    if (n < 0) {
        return -n;
    }
    return n;
}
