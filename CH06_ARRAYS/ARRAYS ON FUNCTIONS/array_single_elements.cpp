// Passing single array elements to functions

#include<stdio.h>

#define SIZE 5

// prototypes
void modifyArray(int b[],int size);
void modifyElement(int e);

int main(){

        int array[SIZE]={0,1,2,3,4};
        
        printf("\tInitial Array values are :\n");
        printf("ELEMENT\t\tVALUE\n");
        for(int i=0;i<SIZE;i++){
            printf("%d\t\t%d\n",i,array[i]);
        }
        printf("\n");
        
        // pass the array to the function through call
        modifyArray(array,SIZE);
        // print the values
        printf("\n\n\tArray after modification :\n");
        printf("ELEMENT\t\tVALUE\n");
        for(int i=0;i<SIZE;i++){
            printf("%d\t\t%d\n",i,array[i]);
        }
        printf("\n");
        // single element
        printf("The value with index 3(array[3]) is %d\n",array[3]);
        // pass an array element to a function
        modifyElement(array[3]);
        printf("The value with index 3 after modification is %d\n",array[3]);
        printf("\n\n");
        return 0;
}

void modifyArray(int b[],int size){
    
    // multiply each element by 2
    for(int i=0;i<size;i++){
        b[i]*=2;
    }
    
}

void modifyElement(int e){
    
    printf("Value in modified element is %d\n",2*e);
    
}

