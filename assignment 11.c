#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss;

    printf("Enter the cost price of the item: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price of the item: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("You made a profit of Rs. %.2f\n", profit);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        printf("You incurred a loss of Rs. %.2f\n", loss);
    } else {
        printf("You neither made a profit nor incurred a loss\n");
    }

    return 0;
}
