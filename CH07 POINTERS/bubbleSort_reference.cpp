#include<stdio.h>

#define SIZE 10

// prototypes
void bubbleSort(int *const array,const int size);

int main(){
    
    int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
    int i;
    
    printf("Data items in original order:\n");
    for(i=0;i<SIZE;i++){
        printf("%4d",a[i]);
    }
    printf("\n");
    bubbleSort(a,SIZE);
    
    printf("Data items in ascending order:\n");
    for(i=0;i<SIZE;i++){
        printf("%4d",a[i]);
    }
    
    
    printf("\n\n");
    return 0;
}

void bubbleSort(int *const array,int size){
    
    // prototype
    void swap(int *element1Ptr,int *element2Ptr);
    int pass;
    int j;
    
    for(pass=0;pass<size-1;pass++){
        for(j=0;j<size-1;j++){
            
            if(array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

void swap(int *element1Ptr,int *element2Ptr){
    int hold=*element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr=hold;
}
