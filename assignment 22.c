#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        n /= 10; 
        count++; 
    } while (n != 0);

    printf("Number of digits: %d\n", count);

    return 0;
}
