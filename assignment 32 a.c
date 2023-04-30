#include <stdio.h>

int main()
 {
    int rows, i, j, k;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Printing Star Pattern 1
    printf("\nStar Pattern 1:\n");
    for(i=1; i<=rows; i++) {
        for(j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }