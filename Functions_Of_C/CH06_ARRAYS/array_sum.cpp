// Adding the elements of an array

#include<stdio.h>

#define SIZE 12 // maximum array size

int main(){
    
    int sum=0;
    int array[SIZE]={1,3,5,4,7,
                     2,99,16,45,
                     67,89,45};
    for(int i=0;i<SIZE;i++){
       
       sum+=array[i];
    }
    
    printf("ELEMENT\t\tVALUE\n");
    for(int i=0;i<SIZE;i++){
        
       printf("%d\t\t%d\n",i,array[i]); 
        
    }
    
    printf("\nSUM=%d",sum);
    
    printf("\n\n");
    return 0;
    
    
    
}