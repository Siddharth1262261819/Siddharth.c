// Menu driven program to implement basic arithmetic operations

#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("Addition = %d", result);
            break;

        case '-':
            result = a - b;
            printf("Subtraction = %d", result);
            break;

        case '*':
            result = a * b;
            printf("Multiplication = %d", result);
            break;

        case '/':
                result = a / b;
                printf("Division = %d", result);
        
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
