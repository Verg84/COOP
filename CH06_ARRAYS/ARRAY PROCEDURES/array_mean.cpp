#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 99

// prototypes
double mean(const int array[]);
void printArray(const int array[]);

int main(){
    int numbers[SIZE];
    srand(time(NULL));
    // insert values to the array
    for(int i=0;i<SIZE;i++)
        numbers[i]=1+rand()%9;
    
    printArray(numbers);
    printf("\n\t *** MEAN=%lf ***",mean(numbers));
    printf("\n\n");
    return 0;
}

double mean(const int array[]){
    
    int total;
    for(int i=0;i<SIZE;i++){
        total+=array[i];
    }
    return (double)total/SIZE;
}

void printArray(const int array[]){
    
    printf("\n");
    
    for(int i=0;i<SIZE;i++){
        if(i%20==0)
            printf("\n");
        printf("%d ",array[i]);
    }
}

