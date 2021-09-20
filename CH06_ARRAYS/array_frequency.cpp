/*******************************
    COUNTS THE FREQUENCY OF 
        THE VALUES OF AN ARRAY
********************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ANSWERS 40
#define FREQ    11

int main(){
    
    // frequencies array
    int freq[FREQ]={0};
    
    srand(time(NULL));
    // answers array [1-10]
    int answers[ANSWERS];
    for(int i=0;i<=ANSWERS;i++){
        
        answers[i]=1+rand()%10;
        
    }
    
    // loop through the array values
    // and use them as pointer for the other array
    for(int i=0;i<ANSWERS;i++){
        
        ++freq[answers[i]];
    }
    
    for(int i=1;i<ANSWERS;i++)
    {
        printf(" %d ",answers[i]);
        if(i%8==0)
            printf("\n");
    }
    
    printf("\n\nGRADE\t\tFREQUENCY\n");
    for(int i=1;i<FREQ;i++){
        printf("%d\t\t%d\n",i,freq[i]);
    }
    
    printf("\n\n");
    return 0;
    
    
}