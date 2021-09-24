/*************************************
    Copy a stream of characters
        using arrays and pointers
**************************************/

#include<stdio.h>

// prototypes

void copyOne(char *const s1,const char * const s2);
void copyTwo(char *s1,const char *s2);

int main(){
    
    char string1[10];
    char *string2="Hello"; // a pointer to a stream of characters
    
    char string3[10];
    char string4[]="Good Bye"; // a pointer to a stream of characters
    
    copyOne(string1,string2);
    printf("string1=%s\n",string1);
    
    copyTwo(string3,string4);
    printf("string3=%s\n",string3);
    
    printf("\n\n");
    return 0;
}

// copy s2 to s1 using arrays
void copyOne(char *const s1,const char * const s2){
    
    for(int i=0;(s1[i]=s2[i])!='\0';i++){
        
        ; // Do nothing
    }
    
}

// copy s2 to s1 using pointers
void copyTwo(char *s1,const char *s2){
    
    for(;(*s1=*s2)!='\0';s1++,s2++){
        
        ; //Do Nothing
    }
}