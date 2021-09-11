// Sample Program using the string class
#include<string>
#include<iostream>
#include<string>
using namespace std;

int main(){
    
    // Define four strings
    string prompt("What is your name: ");
    string name;
    string line(40,'-');
    string total="Hello ";
    
    cout<<prompt;       // Ask for input
    getline(cin,name);   // Input a name in one line
    
    total=total+name;   // Concatenation among strings
    
    cout<<line<<endl;
    cout<<total<<endl;
    
    cout<<"Your name is "<<name.length()<<" characters."<<endl;
    cout<<line<<endl;
    
    return 0;
    
    
}
