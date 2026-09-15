#include <stdio.h>

int main() {
    float cost, selling, percent;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &selling);

    if (selling > cost) {
        percent = ((selling - cost) / cost) * 100;
        printf("Profit %.0f%%", percent);
    }
    else if (cost > selling) {
        percent = ((cost - selling) / cost) * 100;
        printf("Loss %.0f%%", percent);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}