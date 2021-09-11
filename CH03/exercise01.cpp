/************************
    EXERCISE01
*************************/

// A program that calculates the square root 
// using cmath 

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    float x;
    string line(40,'-');
    
    cout<<"Number\t\tSqare Root"<<endl;
    cout<<line<<endl;
    
    x=4;
    cout<<x<<"\t\t"<<sqrt(x)<<endl;
    
    x=12.25;
    cout<<x<<"\t\t"<<sqrt(x)<<endl;
    
    x=0.0121;
    cout<<x<<"\t\t"<<sqrt(x)<<endl;
    
    cout<<"\nEnter a number: ";
    cin>>x;
    cout<<"\n\nNumber\t\tSqare Root"<<endl;
    cout<<line<<endl;
    cout<<x<<"\t\t"<<sqrt(x)<<endl;
    
    
    
    return 0;
    
    
    
    
}