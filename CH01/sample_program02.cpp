/**********************************************
    A program with some functions and comments
***********************************************/
#include<iostream>
using namespace std;

// Function protorypes
void line();
void message();

int main(){
        
        cout<<"Hello! The program starts in main()."
        <<endl;
        line();
        message();
        cout<<"At the end of main()."<<endl;
        return 0;
}

// Function to draw a line
void line(){
    cout<<"-----------------"<<endl;
}
void message(){
    cout<<"I am a function message()."<<endl;
}
