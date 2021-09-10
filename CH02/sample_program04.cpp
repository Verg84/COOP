// Definition and use of variables
#include<iostream>
using namespace std;

int gVar1;      // Global variables
int gVar2=2;    // explicit initialization

int main(){
    char ch('A');   // Local variable initialized,
    // char ch='A';
    cout<<"Value of gVar1:"<<gVar1<<endl;
    cout<<"Value of gVar2:"<<gVar2<<endl;
    cout<<"Character in ch:"<<ch<<endl;
    // Local variables
        // With initialization
    int number=3;
        // Without initialization
    int sum;
    sum=number+5;
    cout<<"Value of sum:"<<sum<<endl;
    
    return 0;
    
    
}