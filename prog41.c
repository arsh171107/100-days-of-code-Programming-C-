#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits *= 10;
    }

    first = temp;

    n = n % digits;
    n = n / 10;

    n = last * digits + n * 10 + first;

    printf("Result = %d", n);

    return 0;
}