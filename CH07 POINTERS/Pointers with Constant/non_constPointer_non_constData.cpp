/**************************************
    Alter a stream of characters using
        non constant pointer to 
            non constant data
***************************************/

#include<stdio.h>
#include<ctype.h> // header for the C islower_ function

void convertToUpper(char *sPtr);

int main()
{
    char string[]="character and $32.98";
    
    
    
    printf("\nThe string before conversion is %s",string);
    
    // process the data through function call
    convertToUpper(string);
    
    // displey the data
    printf("\nThe string after conversion is %s",string);
    
    printf("\n\n");
    return 0;
}

void convertToUpper(char *sPtr){
    
    
    // until the character is different from '\0'
    while(*sPtr!='\0'){
        
        if(islower(*sPtr)){
            *sPtr=toupper(*sPtr);
        }
        
        ++sPtr;
        
    }
    
}

