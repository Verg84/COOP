/******************************
    Use of arrays as 
    character streaming
*******************************/

#include<stdio.h>

int main(){
    
    char user_string[20]; // reserve 20 characters
    char static_string[]="string literal"; // reserve 15 characters
    
    printf("Enter a string:");
    scanf("%s",user_string); // Terminate by '/0'(Enter)
    
    // process the stream of characters
    printf("User string is:%s\nDefault string is:%s\nString with spaces is:",user_string,static_string);
    for(int i=0;i<user_string[i]!='\0';i++){
        printf("%c ",user_string[i]);
    }
    
    printf("\n\n");
    
    return 0;
    
}