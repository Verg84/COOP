// Output the fine for driving fast

#include<iostream>
using namespace std;

int main(){
    
    float limit,speed,toofast;
    
    cout<<"Limit Speed: ";
    cin>>limit;
    
    cout<<"Speed: ";
    cin>>speed;
    
    if((toofast=speed-limit)<10){
        cout<<"You are lucky"<<endl;
    }
    else if(toofast<20){
        cout<<"Finable:40dollars"<<endl;
    }
    else if(toofast<30){
        cout<<"Finable:80dollars"<<endl;
    }
    else{
        cout<<"Hand Over your licence"<<endl;
    }
    
    return 0;
    
}