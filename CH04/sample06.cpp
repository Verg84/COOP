// Inputs an article label and price

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    
    string label;
    double price;
    
    cout<<"Enter an article label: ";
    
    // Input the label (15 max characters)
    cin>>setw(16);
    cin>>label;
    
    cin.sync();     // Clears the buffer
    cin.clear();    // Resets the flags
    
    cout<<"Enter the price of the article: ";
    cin>>price;     // Input the price
    
    // Contolling Ouput:
    cout<<fixed<<setprecision(2)
    <<"\nArticle:"
    <<"\n Label:"<<label<<"\n Price:"<<price<<endl;
    
    //... The program to be continued
    
    return 0;
}