// Euro.cpp

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    double rate=1.15; // Euro to Dollar exchange rate
    cout<<fixed<<setprecision(2);
    
    cout<<"\tEuro\tDollar"<<endl;
    
    for(int euro=1;euro<=5;++euro)
    {
        cout<<"\t"<<euro<<"\t"<<euro*rate<<endl;
    }
    
    return 0;
    
}