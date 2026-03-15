#include <iostream>
using namespace std;

int main() {
    int p = 9, q = 7, r = 9;

    p = (1 + 5) & p;       
    p = p + p;              
    p = (3 + 9) ^ q | (r = 3 + p);  

    cout << p + q + r << endl;  

    return 0;
}