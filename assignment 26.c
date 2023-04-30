#include <stdio.h>

int main() {
    int n, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) {
        reversed = reversed * 10 + n % 10;
    }

    printf("Reverse of number: %d\n", reversed);

    return 0;
}
