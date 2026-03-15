#include<iostream>
using namespace std;

int main(){
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    if(x > y){
        cout << "X is greater" << endl;
    } else {
        cout << "Y is greater" << endl;
    }

    return 0;
}