/*****************************
    use the sizeof operator 
     on an arrays name to 
     return its size in bytes
******************************/

#include<stdio.h>

size_t getSize(float *ptr);

int main(){
    
    float array[20];
    
    printf("\nThe number of bytes in the array is %ld.\n",sizeof(array));
    printf("\nThe number of bytes returned from the function is %ld.",getSize(array));
    
    
    printf("\n\n");
    return 0;
}

size_t getSize(float *ptr){
    
    return sizeof(ptr);
}