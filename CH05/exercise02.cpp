#include<iostream>
using namespace std;

int main(){
    
    int i,x=0;
    
    cout<<"**************************"<<endl;
    cout<<"\tHow operands and operators are assigned"<<endl;
    cout<<"\t in this expression:"<<endl;
    cout<<"\t x=-4*i++ - 6%4"<<endl;
    cout<<"\n\tEnter a value for i: ";
    cin>>i;
    cout<<"\tEnter x:";
    cin>>x;
    
    if(x==-4*i++ - 6%4){
        
        cout<<"RIGHT"<<endl;
    }
    else{
        cout<<"WRONG"<<endl;
        cout<<-4*i++ - 6%4<<endl;
    }
    
    return 0;
    
    
}