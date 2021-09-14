// Draw a rectangle made of asterics
#include<stdio.h>

int main(){
    
    int side;
    
    printf("Enter side length : ");
    scanf("%d",&side);
    
    printf("\n\n");
    for(int i=1;i<=side;i++){
        printf("\n");
        for(int j=1;j<=side;j++){
            printf("*");
        }
    }
    printf("\n\n");
    return 0;
}