#include <stdio.h>

int main() {
    int n, first, last;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    last = n % 10;

    do {
        first = n % 10;
        n /= 10;
    } while (n != 0);

    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);

    return 0;
}
