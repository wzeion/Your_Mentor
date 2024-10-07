#include <stdio.h>

int main() {
    float mark; 
    char grade;  

    printf("Enter the student's marks: ");
    scanf("%f", &mark);
    
    if(mark>=90){
        grade='A';
    }
    else if( 80 <= mark && mark< 90){
        grade='B';
    }
    else if(70 <= mark && mark< 80){
        grade='C';
    }
    else if(60 <= mark && mark< 70){
        grade='D';
    }
    else{
        grade='F';
    }
    printf("Student's grade: %c\n", grade);

    return 0;
}