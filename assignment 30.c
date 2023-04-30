#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0, power;
    printf("Enter the maximum limit (n): ");
    scanf("%d", &num);
    printf("Armstrong numbers between 1 to %d are: ", num);

    while (n <= num) {
        originalNum = n;
        result = 0;
        power = (int) log10(n) + 1;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, power);
            originalNum /= 10;
        }

        if (result == n) {
            printf("%d ", n);
        }

        n++;
    }

    return 0;
}
