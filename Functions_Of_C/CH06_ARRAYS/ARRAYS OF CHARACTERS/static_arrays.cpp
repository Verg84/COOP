// Static Array Demonstartion

#include<stdio.h>

void staticArrayInit();
void autoArrayInit();

int main(){
    
    printf("\t*** First Call to each function:\n");
    staticArrayInit();
    autoArrayInit();
    
    printf("\n\t*** Second Call to each function:\n");
    staticArrayInit();
    autoArrayInit();
    
    printf("\n\n");
    return 0;
}

void staticArrayInit(){
    
    // initialized on the first call
    static int arrayOne[3];
    
    printf("Values on entering the Static Array:\n");
    for(int i=0;i<3;i++){
        printf("arrayOne[%d]=%d ",i,arrayOne[i]);
    }
    
    printf("\n");
    
    // alter the values of the static arrayOne
    // values remain with each call
    printf("\nValues on exiting the Static Array:\n");
    for(int i=0;i<=3;i++){
        printf("arrayOne[%d]=%d ",i,arrayOne[i]+=5);
    }
    
}

void autoArrayInit(){
    
    // initialized with every call
    int arrayTwo[3]={1,2,3};
    
    printf("\n\nValues on entering Automatic Array:\n");
    for(int i=0;i<=3;i++){
        printf("arrayTwo[%d]=%d ",i,arrayTwo[i]);
    }
    printf("\n");
    
    printf("\nValues on exiting Automatic Array:\n");
    for(int i=0;i<=3;i++){
        
        printf("arrayTwo[%d]=%d",i,arrayTwo[i]+=5);
        
    }
    
}