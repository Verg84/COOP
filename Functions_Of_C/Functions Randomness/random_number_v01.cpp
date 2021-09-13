/******************************************
    Generate a random number from a set
*******************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Prototypes
void printRandom(int step,int x,int y);

int main(){

   srand(time(NULL));
   
   //0-2
   printf("\t\t*** 0<=n<=2 ***\n");
   printf("\t\t---------------------\n");
   for(int i=1;i<=100;i++){
       printf("%d ",0+rand()%3);
       if(i%5==0)
           printf("\n");
   }
   
   //1-2
   printf("\t\t*** 1<=n<=2 ***\n");
   printf("\t\t--------------------\n");
   for(int i=1;i<=100;i++){
       printf("%d ",1+rand()%2);
       if(i%5==0)
           printf("\n");
   }
   
   //0-9
   printf("\t\t*** [0-9] ***\n");
   printf("\t\t---------------------\n");
   printRandom(100,0,10);
    printf("\n\n");
   
   // 1000-1112
   printf("\t\t*** [1000-1112] ***\n");
   printf("\t\t---------------------\n");
   printRandom(100,1000,113);
   printf("\n\n");
    
   // -1 - 1
   printf("\t\t*** [-1 - 1] ***\n");
   printf("\t\t---------------------\n");
   printRandom(100,-1,3);
   printf("\n\n");
   
   // -3 - 11
   printf("\t\t*** [-3 - 11] ***\n");
   printf("\t\t---------------------\n");
   printRandom(100,-3,15);
   
   
   printf("\n\n");
   return 0;

}

void printRandom(int step,int x,int y){
    
    for(int i=1;i<=step;i++){
        printf("%d ",x+rand()%y);
        if(i%10==0){
            printf("\n");
        }
    }
    
}

  

