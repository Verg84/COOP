// greater
#include<iostream>
using namespace std;

int main(){
    
    int x,y;
    cout<<"Press two different numbers: "<<endl;
    if(!(cin>>x && cin>>y)){
        cout<<"Invalid"<<endl;
    }
    else{
        cout<<"The greater is "<<(x>y?x:y)<<endl;
    }
    
    return 0;
    
}