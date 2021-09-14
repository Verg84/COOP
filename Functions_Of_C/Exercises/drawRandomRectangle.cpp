// Draw a rectangle with different character

#include<stdio.h>

int main(){
    
   char shape;
   int length;
   
   // Take the shape
   printf("\t\t*** Enter the shape: ");
   scanf("%c",&shape);
   printf("\t\t*** Enter the length :");
   scanf("%d",&length);
   
   for(int i=1;i<=length;i++){
       printf("\n");
       for(int j=0;j<=length;j++){
           printf("%c",shape);
       }
   }
    
    
    printf("\n\n");
    return 0;
}