#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 99

void bubbleSort(int array[]);
int median(int array[]);
void printArray(const int array[]);

int main(){
    
    int medianValue;
    int numbers[SIZE];
    
    srand(time(NULL));
    for(int i=0;i<SIZE;i++){
        numbers[i]=1+rand()%9;
    }
    printArray(numbers);
    
    medianValue=median(numbers);
    printf("\n\t\t *** MEDIAN : %d",medianValue);
    
    printf("\n\n");
    return 0;
}

void bubbleSort(int array[]){
    
    int pass;
    int holder;
    
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

void printArray(const int array[]){
    
    printf("\n");
    
    for(int i=0;i<SIZE;i++){
        if(i%20==0)
            printf("\n");
        printf("%d ",array[i]);
    }
}

int median(int array[]){
    
    bubbleSort(array);
    printArray(array);
    
    return array[SIZE/2];
    
}