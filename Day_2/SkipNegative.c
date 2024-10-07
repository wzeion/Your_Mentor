#include <stdio.h>

int main() {
    int n, i, count;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);  
    for (i = 0; i < count; i++) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0) {
            goto skip;
        }
        printf("You entered a non-negative number: %d\n", n);

    skip:;
    }
    printf("Program ended.\n");
    return 0;
}
