/*******************************
*    EXAMPLE OF ARRAY          *
*    WITH TWO POINTERS         *
********************************/

#include<stdio.h>

#define STUDENTS 3
#define EXAMS 4

// prototypes
int maximum(const int grades[][EXAMS],int pupils,int tests);
int minimum(const int grades[][EXAMS],int pupils,int tests);
double average(const int setOfGrades[],int tests);
void printArray(const int grades[][EXAMS],int pupils,int tests);

int main(){
        
    printf("\n\n");
    return 0;   
}

int minimum(const int grades[][EXAMS],int pupils,int tests){
    
    int rows,columns;
    int lowGrade=100; // initialize with the highest grades
    for(rows=0;rows<pupils;rows++){
        for(columns=0;columns<tests;columns++){
            if(grades[rows][columns]<lowGrade){
                lowGrade=grades[rows][columns];
            }
        }
    }
    
    return lowGrade;
}
int maximum(const int grades[][EXAMS],int pupils,int tests){
    int rows,columns;
    int highGrade=0; // initialize with the lower grade
    
    for(rows=0;rows<pupils;rows++){
        for(columns=0;columns<tests;columns++){
            if(grades[rows][columns]>highGrade){
                highGrade=grades[rows][columns];
            }
        }
    }
    return highGrade;
}

double average(const int setOfGrades[],int tests){
    int i;
    int total=0;
    
    for(i=0;i<tests;i++){
        total+=setOfGrades[i];
    }
    
    return (double)total/tests;
}

void printArray(const int grades[][EXAMS],int pupils,int tests){
    
    for(int i=0;i<pupils;i++){
        printf("\nStudent Grades[%d]",i);
        for(int j=0;j<tests;j++){
            printf("%-5d",grades[i][j]);
        }
    }
}


