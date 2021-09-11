// Evaluating operands in logical expressions

#include<iostream>
using namespace std;

int main(){
    
    cout<<boolalpha; // Outputs boolean values as true,false.
    
    bool res=false;
    
    int y=5;
    res=7||(y=0);
    cout<<"Result of 7||(y=0) is "<<res<<endl;
    cout<<"Value of y is "<<y<<endl;
    
    int a,b,c;
    
    a=b=c=0;
    
    res=++a || (++b && ++c);
    cout<<"\n"
        <<"res="<<res
        <<", a="<<a
        <<", b="<<b
        <<", c="<<c<<endl;
    
    a=b=c=0;
    res=(++a && ++b) || ++c;
    cout<<"\n"
        <<"res="<<res
        <<", a="<<a
        <<", b="<<b
        <<", c="<<c<<endl;
    
    return 0;
    
    
    
}