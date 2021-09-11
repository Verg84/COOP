/*******************************
    FORMATING AND MANIPULATORS
********************************/
// Demonstrates calling a manipulator

#include<iostream>
using namespace std;

int main(){
    
    // Output of a positive sign
    // using showpos manipulator
    cout<<showpos<<123<<endl;
    cout<<22<<endl<<endl;
    // Cancel positive sign
    // using noshowpos manipulator
    cout<<noshowpos<<123<<endl;
    cout<<22<<endl;
}

