#include<iostream>
using namespace std;

int main(){
    int a[2][2];

    for(int r=0; r<=1; r++){
        for(int c=0; c<=1; c++){
            cout<<"Enter value : ";
            cin>>a[r][c];
        }
    }

    for(int r=0; r<=1; r++){
        for(int c=0; c<=1; c++){
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }

    return 0;
}