#include<iostream>
using namespace std;

int main(){
    int a[5], max;

    for(int i=0; i<=4; i++){
        cout<<"Enter a : "<<i<<endl;  // endl added
        cin>>a[i];
    }

    max=a[0];

    for(int i=1; i<=4; i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    cout<<"Max = "<<max<<endl;

    return 0;
}
