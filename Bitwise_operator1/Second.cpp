#include <iostream>
using namespace std;

int main() {
    int pp = 2, qq = 9, rr = 5;
    
    pp =  (pp + rr) + pp;
    rr = rr + rr;
    rr= (rr + rr) &  rr;

    cout << pp + qq + rr << endl;  

    return 0;
}