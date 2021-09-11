// OUTPUTS THREE RANDOM NUMBERS

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    unsigned int seed;
    int z1,z2,z3;
    
    cout<<"\t--- Random Numbers ---\n"<<endl;
    cout<<"Enter An Integer "<<endl;
    cout<<"\tTo initialize the random number Generator:";
    cin>>seed;
    
    // use the variable as arguments
    // to generate new sequence of random numbers
    
    // Compute three random numbers
    z1=rand();
    z2=rand();
    z3=rand();
    
    cout<<"\nThree Random Numbers:"<<z1<<","<<z2<<","<<z3<<"\n\n\n"<<endl;
    
    return 0;
}