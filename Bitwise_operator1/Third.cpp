#include<iostream>
using namespace std;

int main(){
    int x = 2, y = 24, z = 2;

    z = (x ^ z) ^ x;

    cout << "z = " << z << endl;  

    return 0;
}