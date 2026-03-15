#include<iostream>
using namespace std;

int main(){
    int a, b, choice;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << " a + b = " << a + b; break ;

        case 2: cout << "a - b  = " << a - b; break;
        
        case  3: cout << "a * b = " << a * b; break;
        
        case 4: cout << "a / b = " << a / b; break ;
        
        case 5: cout << "a MOD b = " << a % b; break;
        
        default: cout << "Wrong Choice";
    }

    return 0;
}