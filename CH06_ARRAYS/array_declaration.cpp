// Give initial values on declaration

#include<stdio.h>

int main(){
    
    int n[10]={32,27,64,18,95, 4,90,70,60,37};
    
    
    // prints the values
    printf("ELEMENT\t\tVALUE\n");
    for(int i=0;i<10;i++){
        printf("%d\t\t%d\n",i,n[i]);
    }
    
    return 0;
    
    
}