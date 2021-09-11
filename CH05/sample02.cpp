// Effects of the postfix and prefix notation

#include<iostream>
using namespace std;

int main(){
    
    int i(2),j(8);
    
    cout<<i++<<endl;    //=2
    cout<<i<<endl;      //=3
    cout<<j--<<endl;    //=8
    cout<<--j<<endl;    //=6
    
    return 0;
}