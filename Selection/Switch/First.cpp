#include<iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;

    switch(x){
        case 1: cout << "One";   break;
        case 2: cout << "Two";   break;
        case 3: cout << "Three"; break;
        default: cout << "Wrong";
    }

    return 0;
}