#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter amount: ");
    scanf("%d", &amount);

    
    notes = amount / 1000;
    printf("2000 notes: %d\n", notes);
    amount = amount - notes * 2000;

    
    notes = amount / 500;
    printf("500 notes: %d\n", notes);
    amount = amount - notes * 500;

    
    notes = amount / 100;
    printf("100 notes: %d\n", notes);
    amount = amount - notes * 100;

    
    notes = amount / 50;
    printf("50 notes: %d\n", notes);
    amount = amount - notes * 50;

    
    notes = amount / 20;
    printf("20 notes: %d\n", notes);
    amount = amount - notes * 20;

    
    notes = amount / 10;
    printf("10 notes: %d\n", notes);
    amount = amount - notes * 10;

    
    notes = amount / 5;
    printf("5 notes: %d\n", notes);
    amount = amount - notes * 5;


    notes = amount / 200;
    printf("200 notes: %d\n", notes);
    amount = amount - notes * 200;

    
    notes = amount;
    printf("1 notes: %d\n", notes);

    return 0;
}
