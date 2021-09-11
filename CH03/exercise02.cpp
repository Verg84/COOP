// A program containing errors
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    
    string message="\nLearn from your mistakes!";
    cout<<message<<endl;
    
    int len=message.length();
    cout<<"Length of string is "<<len<<" characters long"<<endl;
    
    // Add a random number
    int b;
    // Initialize the generator
    srand(12);
    b=rand();
    cout<<"Random Number:"<<b<<endl;
    
    return 0;
    
}