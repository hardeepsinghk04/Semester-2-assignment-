#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Natural numbers in reverse order from %d to 1:\n", n);
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }

    return 0;
}
