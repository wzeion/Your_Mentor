#include<stdio.h>
int main(){
    int num1,num2,operator,result;

    printf("Choose Operator from below:\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Operator: ");
    scanf("%d",&operator);

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    switch(operator){
        case 1:
        result=num1+num2;
        break;
        case 2:
        result=num1-num2;
        break;
        case 3:
        result=num1*num2;
        break;
        case 4:
        result=num1/num2;
        break;
        default: printf("Enter from the given list!");
    }

    printf("Result: %d",result);

    return 0;

    
}