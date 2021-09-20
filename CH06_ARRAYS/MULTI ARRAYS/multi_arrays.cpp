/***********************
*   GIVE INITIAL VALUES*
*    TO MULTI ARRAYS   *
************************/    
#include<stdio.h>

void printArray(const int array[][3]);

int main(){
    
    // multi arrays initialization
    int array1[2][3]={{1,2,3},{4,5,6}};
    int array2[2][3]={1,2,3,4,5};
    int array3[2][3]={{1,2},{4}};
    
    printf("Values in array1 :\n");
    printArray(array1);
    
    printf("Values in array2 :\n");
    printArray(array2);
    
    printf("Values in array3 :\n");
    printArray(array3);
    
    
    printf("\n");
    return 0;
}

void printArray(const int array[][3]){
    
    int i; // rows
    int j; // columns
    
    // loop over the rows
    for(i=0;i<=1;i++){
        
        // loop over the columns
        for(j=0;j<=2;j++){
            printf("%d ",array[i][j]);
        }
        
        // new line
        printf("\n");
    }
    
}