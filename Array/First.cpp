#include<iostream>
using namespace std;

int main(){
    int a[3], sum=0;

    for(int i=0; i<=2; i++ ) 
    {
        cout<<"Enter a : "<<i;
        cin>>a[i];
    }

    for(int i=0; i<=2; i++){
        sum = sum+a[i];
        cout<<"a : "<<a[i]<<endl;
    }

    cout<<"Sum = "<<sum<<endl;

    return 0;
}