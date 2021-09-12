/******************************************
    Generate random numbers betweem [1-6]
    and count their frequencies
******************************************/

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    // Number frequency
    int f1,f2,f3,f4,f5,f6;
    f1=f2=f3=f4=f5=f6=0;
    
    int roll; // counter
    int face; // the result
    
    for(roll=1;roll<=6000;roll++){
        
        face=1+rand()%6;
        
        switch(face){
            
            case 1:
                ++f1;
                break;
            
            case 2:
                ++f2;
                break;
            
            case 3:
                ++f3;
                break;
                
            case 4:
                ++f4;
                break;
                
            case 5:
                ++f5;
                break;
                
            case 6:
                ++f6;
                break;
        }
        
    }
    
    printf("Face\t\tFrequency\n");
    printf("1\t\t%d\n",f1);
    printf("2\t\t%d\n",f2);
    printf("3\t\t%d\n",f1);
    printf("4\t\t%d\n",f1);
    printf("5\t\t%d\n",f5);
    printf("6\t\t%d\n",f6);
            
        
    return 0;
    
}