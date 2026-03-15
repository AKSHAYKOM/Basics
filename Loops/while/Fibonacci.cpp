#include<iostream>
using namespace std;

int main(){
    int n, a=0, b=1, c;

    cout<<"Enter limit: ";
    cin>>n;

    while( a <= n ){
        cout<< a <<" ";
        c = a +b;
        a = b;
        b = c;
    }

    return 0;
}