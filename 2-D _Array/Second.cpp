#include<iostream>
using namespace std;

int main(){
    int a[3][3], 
     even=0, odd=0;

    for(int r=0; r<=2; r++)
    {
        for(int c=0; c<=2; c++)
        {
            cout<< "Enter value : ";
            cin >> a[r][c];
        }
    }

    for(int r=0; r<=2; r++){
        for(int c=0; c<=2; c++){
            cout << a[r][c] << " ";
            if( a[r][c] % 2 ==0){
                even++;
            } else {
                odd++;
            }
        }
        cout<<endl;
    }

    cout<<"Even count = "<<even<<endl;
    cout<<"Odd count = "<<odd<<endl;

    return 0;
}