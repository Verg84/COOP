// To represent hexademical integer literals
// and decimal integers literals
#include<iostream>
using namespace std;

int main(){
    // cout outputs integers as decimal integers
    cout<<"Value of 0XFF="<<0xFF<<" decimal"<<endl; // OUTPUT: 255 decimal
    // The manipulator hex changes output to hexademical
    // The manipulator dec changes output to decimal
    cout<<"Value of 27 is "<<hex<<27<<" to hexademical"<<endl;  // OUTPUT 1d hexademical
    
    return 0;
    
}