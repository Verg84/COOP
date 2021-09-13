/***************************************
    1. Compute hypoteneuse
    2. Find minimum number
    3. Convert integer values to float
****************************************/

#include<stdio.h>
#include<math.h>
using namespace std;

// Prototypes
double hypoteneuse(double sideA,double sideB);
int minimum(int x,int y,int z);
float intTofloat(int number);

int main(){
    
    // users choice
    int choice;
    
    // triangle sides
    double sideA,sideB;
    
    // minimumint 
    int x,y,z;
    // integer to convert
    int i;
    
    printf("\t\t******* MATH FUNCTIONS ******\n");
    
    printf("\n");
    printf("\t\t*1.HYPOTENEUSE\n");
    printf("\t\t*2.MINIMUM\n");
    printf("\t\t*3.FLOAT CONVERTER\n");
    printf("\t\t*4.EXIT\n");
    
    scanf("%d",&choice);
    
    while(choice!=4){
        
    
    switch(choice){
        
        case 1:
            printf("Enter length of side A: ");
            scanf("%lf",&sideA);
            printf("Enter length of side B: ");
            scanf("%lf",&sideB);
            printf("H=%f",hypoteneuse(sideA,sideB));
            break;
        
        case 2:
            printf("Enter three integers:");
            scanf("%d%d%d",&x,&y,&z);
            printf("Minimum=%d",minimum(x,y,z));
            break;
        
        case 3:
            printf("Enter an integer");
            scanf("%d",&i);
            printf("%d=%f",i,intTofloat(i));
            break;
        
        
        
    }
    
   }
    
   return 0;
    
}

double hypoteneuse(double sideA,double sideB){
    
    return pow(sideA,2)+pow(sideB,2);
    
}

int minimum(int x,int y,int z){
    
    int minimum=x;
    
    if(y<x){
        
        minimum=y;
    }
    
    if(z<x){
        
        minimum=z;
        
    }
    
    return minimum;
    
}

float intTofloat(int number){
    
    return float(number);
    
}