/*********************************
    SORT THE ELEMENTS OF AN ARRAY
    ON ASCENDING ORDER
**********************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10

int main(){
    
    int holder;
    
    int array[SIZE];
    // insert values to the array
    srand(time(NULL));
    for(int i=0;i<SIZE;i++){
        array[i]=1+rand()%100;
    }
    // display the values
    printf("ELEMENT\t\tVALUE\n");
    for(int i=0;i<SIZE;i++){
        printf("%d\t\t%d\n",i,array[i]);
    }
    
    // Bubble Sort
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE-1;j++){
            if(array[i]>array[i+1]){
                // if next element is smaller
                // exchange their positions
                holder=array[i];
                array[i]=array[i+1];
                array[i+1]=holder;
            }
        }
    }
    
    printf("\nAfter Sorting:\n");
    printf("ELEMENT\t\tVALUE:\n");
    for(int i=0;i<SIZE;i++){
        printf("%d\t\t%d\n",i,array[i]);
    }
    
    
    printf("\n\n");
    return 0;
    
    
}