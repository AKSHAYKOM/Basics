#include<iostream>
using namespace std;

int main(){
    float cd, cn, percentage;

    cout << "Enter CD marks: ";
    cin >> cd;

    cout << "Enter CN marks: ";
    cin >> cn;

    percentage = (cn + cd) / 5;

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90){
        cout << "Grade: A+" << endl;
    } 
    else if( percentage >= 80){
        cout << "Grade: A" << endl;
    }  

    else if( percentage >= 70){
        cout << "Grade: B" << endl;
    } 

    else if( percentage >= 60){
        cout << "Grade: C" << endl;
    } 

    else if( percentage >= 50){
        cout << "Grade: D" << endl;
    } 

    else {
        cout << "Grade: F" << endl;
    }

    return 0;
}