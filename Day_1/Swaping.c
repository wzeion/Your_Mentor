#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers : ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: a = %d, b = %d\n", num1, num2);
    num1 += num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: a = %d, b = %d\n", num1, num2);
    return 0;
}