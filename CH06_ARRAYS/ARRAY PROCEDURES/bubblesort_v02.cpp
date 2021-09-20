#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIZE 99

// prototypes
void printArray(const int array[]);
void bubbleSort(int array[]);

int main(){
    
    int numbers[SIZE];
    // insert values to the array
    for(int i=0;i<SIZE;i++){
        numbers[i]=1+rand()%9;
    }
    
    printArray(numbers);
    
    // call bubble sort
    bubbleSort(numbers);
    
    printArray(numbers);
    
    printf("\n\n");
    return 0;
    
}

void printArray(const int array[]){
    
    printf("\n");
    
    for(int i=0;i<SIZE;i++){
        if(i%20==0)
            printf("\n");
        printf("%d ",array[i]);
    }
}

void bubbleSort(int array[]){
    
    int holder;
    int pass;
    
    for(pass=1;pass<SIZE;pass++){
        for(int j=0;j<SIZE-1;j++){
            if(array[j]>array[j+1]){
                holder=array[j];
                array[j]=array[j+1];
                array[j+1]=holder;
            }
        }
    }
    
}