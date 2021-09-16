/*************************
    LINEAR SEARCH
**************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100

int linearSearch(const int array[],int key,int size);

int main(){
    
    srand(time(NULL));
    
    int value; // users value to search
    int numbers[SIZE];
    // give values to the array
    for(int i=0;i<SIZE;i++){
        
        numbers[i]=1+rand()%20;
    }
    // display
    for(int i=1;i<SIZE;++i){
        
        printf("%d:%d ",i,numbers[i]);
        if(i%10==0){
            
            printf("\n");
        }
    }
    
    printf("\nEnter a value to search:");
    scanf("%d",&value);
    
    int pos=linearSearch(numbers,value,SIZE);
    if(pos!=-1){
        
        printf("\t* Value found at position %d",pos);
    }
    else{
        printf("\t* Value NOT found");
    }
    
    
    printf("\n\n");
    return 0;
    
}

int linearSearch(const int array[],int key,int size){
    
    // loop over all the array elements
    for(int i=0;i<size;++i){
        
        if(array[i]==key){
            
            return i;
        }
    }
    
    return -1; // key not found
    
}