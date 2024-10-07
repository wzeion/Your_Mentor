#include <stdio.h>

int main() {
    int n;

    while(1==1){  
        printf("Enter a number (Enter 29 to exit): ");
        scanf("%d", &n);

        if (n == 29) {
            break;  // Exit the loop if the user enters -1
        }

        printf("You entered: %d\n", n);
    }

    printf("You have exited the loop.\n");
    return 0;
}
