/**********************************
    Generate ten random number
    providing a seeder
***********************************/

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int counter;
    unsigned int seeder;
    
    printf("Provide seed: ");
    scanf("%u",&seeder);
    
    srand(seeder);
    
    for(counter=1;counter<=10;counter++){
        
        printf("%d\t",1+rand()%6);
        
        if(counter%5==0)
            printf("\n");
        
    }
    
    return 0;
    
}