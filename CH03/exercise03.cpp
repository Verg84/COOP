/*******************
    EXERCISE03
********************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string message="I have learned something new today";
    string msOne,msTwo;
    string prompt("Write a line: ");
    
    cout<<"The \""<<message<<"\" has "<<message.length()<<" letters on it."<<endl;
    
    cout<<prompt;
    getline(cin,msOne);
    
    cout<<"\n\n"<<prompt;
    getline(cin,msTwo);
    
    string finalString=msOne+'*'+msTwo;
    cout<<"Final string:"<<finalString<<endl;
    
    
    return 0;
}