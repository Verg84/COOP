// Demonstration of compound assignments

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    float x,y;
    
    cout<<"\n Enter a starting value: ";
    cin>>x;
    
    cout<<"\n Enter the increment value: ";
    cin>>y;
    
    x+=y;
    
    cout<<"\n Enter a value for multiplication: ";
    cin>>y;
    x*=y;
    
    cout<<"\n Enter a divisor value: ";
    cin>>y;
    x/=y;
    
    cout<<"Lucky Number: "<<fixed<<setprecision(0)<<x<<endl;
    
    return 0;
    
    
    
    
}