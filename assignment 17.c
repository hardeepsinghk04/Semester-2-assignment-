#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d:\n", n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
