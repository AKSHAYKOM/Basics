#include<iostream>
using namespace std;

int main(){
    int num, r, a=0;

    cout<<"Enter number: ";
    cin>>num;

    for(; num>0; ){
        r = num%10;
        a = a*10+r;
        num = num/10;

    }

    cout<<"Reversed = "<<a<<endl;

    return 0;
}