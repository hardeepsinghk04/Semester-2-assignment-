#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;
    
    printf("Enter a base number: ");
    scanf("%d", &base);
    
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    printf("%d^%d = %lld", base, exponent, result);
    
    return 0;
}
