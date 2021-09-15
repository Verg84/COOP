/************************************
 Decide the grading according 
 on average points
*************************************/

#include<stdio.h>

int qualityPoints(int avg);

int main(){
    
    float grade_avg;
    for(int i=0;i<=5;i++){
        
        printf("Enter number of average points:");
        scanf("%f",&grade_avg);
        
        printf("GRADE:%d",qualityPoints(grade_avg));
        printf("\n");
    }
    printf("\n\n");
    return 0;
    
}    

int qualityPoints(int avg){
    
    int grade=0;
    
    if(avg>=90)
        grade=4;
    else if(avg>=80)
        grade=3;
    else if(avg>=70)
        grade=2;
    else if(avg>=60)
        grade=1;
    else 
        grade=0;
    
    return grade;
    
}