/*******************************************************
*    Program that reads values,                         *
*    compute and return the nearest round integer.      *
*******************************************************/
// y=floor(x+0.5)
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    
    int number;
    
    
    printf("\t\t*** ROUND using floor() ***\n\n");
    printf("\t\t * Enter a number:");
    scanf("%d",&number);
    
    while(number!=' ')
    {
        printf("\n\t\t%d=%lf Rounded\n\n",number,floor(number+0.5));
        
        printf("\t\t * Enter a number:");
        scanf("%d",&number);
    }
    
    return 0;
    
    
}
