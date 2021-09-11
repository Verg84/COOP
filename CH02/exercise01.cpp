/**********************************************************
    A program that uses the sizeof operator, to determine
    the size of memory occupied by each fundamental type.
***********************************************************/
#include<iostream>
using namespace std;

// Prototypes
void line();
void gap();

int main(){
    cout<<"TYPES"<<"        "<<"BYTES"<<endl;
    line();
    
    // int
    cout<<"int:     ";
    gap();
    cout<<sizeof(int)<<endl;
    line();
    
    // short;
    cout<<"short:       ";
    gap();
    cout<<sizeof(short)<<endl;
    line();
    
    // long
    cout<<"long:     ";
    gap();
    cout<<sizeof(long)<<endl;
    line();
    
    // float
    cout<<"float:        ";
    gap();
    cout<<sizeof(float)<<endl;
    line();
    
    // double
    cout<<"double:       ";
    gap();
    cout<<sizeof(double)<<endl;
    line();
    
    return 0;
    
}

void line(){
    cout<<"-------------------------"<<endl;
}
void gap(){
    cout<<"     ";
}