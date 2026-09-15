#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Enter expression (e.g. 4 + 2): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("%.0f", result);
            break;

        case '-':
            result = a - b;
            printf("%.0f", result);
            break;

        case '*':
            result = a * b;
            printf("%.0f", result);
            break;

        case '/':
            if (b != 0)
                printf("%.2f", a / b);
            else
                printf("Cannot divide by zero");
            break;

        case '%':
            printf("Modulo works with integers only");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}