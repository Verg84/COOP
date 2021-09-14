// Return the hypoteneuse 
//  given the two sides

#include<stdio.h>
double hyp(double sideA,double sideB);

int main(){
    double sideA,sideB;
    
    printf("\t\t*** Right Triangle Hypoteneuse ***\n");
    printf("\t * Enter length of side A ");
    scanf("%lf",&sideA);
    printf("\t * Enter length of side B ");
    scanf("%lf",&sideB);
    printf("\n");
    printf("\t*Side A\t\tSide B\t\tHopotenuese\n");
    printf("\t*%lf\t*%lf\t*%lf",sideA,sideB,hyp(sideA,sideB));
    
    printf("\n");
    printf("\n");
    return 0;
    
    
    
}

double hyp(double sideA,double sideB){
    
    return (sideA*sideA+sideB*sideB);
    
}