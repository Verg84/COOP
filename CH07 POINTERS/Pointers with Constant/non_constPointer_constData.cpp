/************************************************
    Character stream displaying
        one at a time using non constant pointer
        to constant data.
*************************************************/

#include<stdio.h>

// prototypes
void printCharacters(const char *sPtr);

int main(){
    
    char string[]="print characters of a string!";
    
    printf("The string is:\n");
    printCharacters(string);
    printf("\n\n");
    
    return 0;
}
void printCharacters(const char *sPtr){
    
    for(;*sPtr!='\0';sPtr++){
        
        printf("%c",*sPtr);
    }
}