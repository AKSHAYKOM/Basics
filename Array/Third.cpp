#include<iostream>
using namespace std;

int main(){
    int a[5], min;

    for(int i=0; i<=4; i++){
        cout<<"Enter a : "<<i<<endl;  // endl added
        cin>>a[i];
    }

    min=a[0];

    for(int i=1; i<=4; i++){
        if(a[i]<min){
            min=a[i];
        }
    }

    cout<<"Min = "<<min<<endl;

    return 0;
}
