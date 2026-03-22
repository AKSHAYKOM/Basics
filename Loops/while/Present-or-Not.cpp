#include<iostream>
using namespace std;

int main(){
    int num, digit, r;
    bool found=false;

    cout<<"Enter number: ";
    cin>>num;

    cout<<"Enter digit to find: ";
    cin>>digit;

    while(num>0)
    {
        r = num%10;
        if( r== digit){
            found = true;
        }
        num=num/10;
    }

    if(found==true)
    {
        cout<<"Digit Found"<<endl;
    } else {
        cout<<"Digit Not Found"<<endl;
    }

    return 0;
}