// Manipulators setw() and setfill()
// declared on iomanip header file

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    // filled width 6
    cout<<'|'<<setw(6)<<'X'<<'|';
    
    // filled width 10
    cout<<fixed<<setprecision(2)<<setw(10)<<123.4<<endl
    <<"1234567890"<<endl;
    
    return 0;
    
    
}