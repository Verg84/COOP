// Generate a random number from sets

#include<stdio.h>
#include<math.h>
#include<time.h>

int main(){
    
    printf("[2,4,6,8,10] :\n");
    for(int i=1;i<=100;i++){
        
        printf("%d ",2*(1+rand()%5));
        if(i%10==0)
            printf("\n");
    }
    printf("\n");
    
    printf("[3,5,7,9,11] :\n");
    for(int i=1;i<=100;i++){
        printf("%d ",1+2*(1+rand()%5));
        if(i%10==0)
            printf("\n");
    }
    printf("\n");
    
    printf("[6,10,14,18,22] :\n");
    for(int i=1;i<=100;i++){
        printf("%d ",6+4*(1+rand()%5));
        if(i%10==0)
            printf("\n");
    }
    
    
    printf("\n\n");
    return 0;
    
}