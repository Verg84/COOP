//average.cpp
// Computing the average of numbers

#include<iostream>
using namespace std;

int main(){
    
    int count=0;
    int x;
    float sum=0.0;
    
    cout<<"Enter some integers:\n"
        <<"(break with any letter)"<<endl;
    while(cin>>x){
        sum+=x;
        ++count;
        
    }
    
    cout<<"The average is: "<<sum/count<<endl;
    
    return 0;
    
    
    
}
