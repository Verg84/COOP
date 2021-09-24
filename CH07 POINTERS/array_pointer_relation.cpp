/************************/
#include<stdio.h>

int main(){
    
    // array initialization
    int array[]={120,20,30,40};
    
    // pointer to the array
    int *arrayPtr=array;
    
  
    
    // Array subscript notation - pointer is the array name
    printf("*Array printed with subscript notation:\n");
    for(int i=0;i<4;i++){
        printf("array[%d]=%d ",i,array[i]);
    }
    
    printf("\n");
    
    // Pointer offset notation - pointer is the array's name
    printf("\n*Pointer offset notation:\n");
    for(int i=0;i<4;i++){
        printf("*(b+%d)=%d\n",i,*(array+i));
    }
    
    printf("\n");
    
    // Pointer subscript notation
    printf("\nPointer subscript notation:\n");
    for(int i=0;i<4;i++){
        printf("arrayPtr[%d]=%d\n ",i,arrayPtr[i]);
    }
    
    printf("\n");
    
    printf("\nPointer/offset notation:\n");
    for(int i=0;i<4;i++){
        printf("*(arrayPtr+%d)=%d\n ",i,*(arrayPtr+i));
    }
    
    printf("\n\n");
    return 0;
}