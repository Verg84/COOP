/**************************
    BINARY SEARCH
***************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 15

int binarySearch(const int array[],int key,int low,int high);
void bubbleSort(int array[]);
void printArray(const int array[]);

int main(){
    
    srand(time(NULL));
    
    int search;
    int numbers[SIZE];
    
    // insert values to the array
    for(int i=0;i<=SIZE;i++){
        numbers[i]=1+rand()%200;
    }
    
    printArray(numbers);
    printf("Array Sorted");
    bubbleSort(numbers);
    printArray(numbers);
    
    printf("\n * Enter a value to Search:");
    scanf("%d",&search);
    
    int position=binarySearch(numbers,search,0,SIZE-1);
    if(position!=-1){
        printf("\t* Value %d found at position:%d",search,position);
    }
    else{
        printf("\t * Value %d Not Found",search);
    }
    
    printf("\n\n");
    return 0;
    
}

void printArray(const int array[]){
    
    printf("\nELEMENT\t\tVALUE");
    for(int i=0;i<=SIZE;i++)
    {
        printf("%d\t\t%d\n",i,array[i]);
    }
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

int binarySearch(const int array[],int key,int low,int high){
    
    int middle;
    while(low<=high){
        // find the middle position
        middle=(low+high)/2;
        // the value of the position is the key
        if(key==array[middle]){
            // return the position
            return middle;
        }
        // the search value is lower
        else if(key<array[middle]){
            // change the high limit
            high=middle-1;
        }
        // the search value is higher
        else{
            // change the lower limit
            low=middle+1;
        }
    }
    
    return -1; // key not found
}

