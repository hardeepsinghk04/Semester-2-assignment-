#include <stdio.h>

int main() {
    int n, first, last, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    last = n % 10;

        do {
        first = n % 10;
        n /= 10;
    } while (n != 0);

    sum = first + last;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}
