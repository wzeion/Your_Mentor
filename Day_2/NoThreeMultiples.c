#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 != 0) {
             printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
