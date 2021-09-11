/****************************************************
    Reads integral decimal values and 
    generates octal,decimal and hexademical output.
*****************************************************/

#include<iostream>
using namespace std;

int main(){
    
    int number;
    
    cout<<"Enter an integer: ";
    cin>>number;
    
    cout<<uppercase
    <<"Octal \t Decimal \t Hexademical\n"
    <<oct<<number<<"\t\t"
    <<dec<<number<<"\t\t"
    <<hex<<number<<endl;
    
    
    return 0;
    
    
}