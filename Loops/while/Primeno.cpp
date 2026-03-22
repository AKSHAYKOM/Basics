#include<iostream>
using namespace std;

int main(){
    int num, i=2, count=0;

    cout<<"Enter number: ";
    cin>>num;

    while( i <= num/2){
        if(num % i == 0){
            count++;
        }
        i++;
    }

    if(count==0)
    {
        cout<<num<<" is Prime"<<endl;
    }
    else 
    {
        cout<<num<<" is Not Prime"<<endl;
    }

    return 0;
}
