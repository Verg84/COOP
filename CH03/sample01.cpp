/******************************
        FUNCTION CALLS
*******************************/

// Calculating powers 
// using the standard function pow()

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    double x=2.5,y;
    
    // Compute x raised to the power of three
    cout<<"y="<<pow(x,3.0)<<" "<<sizeof(y)<<endl;
    cout<<"y="<<pow(x,3)<<" "<<sizeof(y)<<endl;
    
    // Calculating with pow() is possible:
    cout<<"2+(5 raised to the power 2.5) yields: ";
    cout<<2.0+pow(5.0,x)<<endl;
    
    return 0;
    
}
