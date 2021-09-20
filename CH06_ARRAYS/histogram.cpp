/*******************
    HISTOGRAM
********************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10

int main(){
    
    int array[SIZE];
    
    // initial values
    for(int i=0;i<SIZE;i++){
        
        array[i]=1+rand()%10;
    }
    
    // create the histogram
    printf("ELEMENT\t\tVALUE\t\tHISTOGRAM\n");
    for(int i=0;i<SIZE;i++){
        printf("%d\t\t%d\t\t",i,array[i]);
        for(int j=1;j<=array[i];j++){
            
            printf("%c",'*');
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
    
}