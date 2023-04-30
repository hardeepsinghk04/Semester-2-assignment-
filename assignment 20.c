#include <stdio.h>

int main() {
    int i = 1;

    printf("Odd numbers between 1 and 100:\n");
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= 100);

    return 0;
}
