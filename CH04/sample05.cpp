// Ouputs octal, decimal and hexademical code

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int number=' ';
    
    cout<<"The white space code:"<<number<<endl;
    
    char ch;
    string prompt ="\nPlease enter a character followed by "
                    " <return>: ";
                    
    cout<<prompt;
    cin>>ch;
    
    
    number=ch;
    
    cout<<"The character "<<ch<<" has code "<<number<<endl;
    
    cout<<uppercase<<"Octal\tDecimal\tHexademical"<<endl;
    cout<<oct<<number<<"\t"<<dec<<number<<"\t"<<hex<<number<<endl;
    
    
    return 0;
    
}