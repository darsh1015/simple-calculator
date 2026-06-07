#include <stdio.h>

int main() {
    int a, b, choice, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1:
            result = a - b;   // BUG: Should be a + b
            printf("Result = %d", result);
            break;

        case 2:
            result = a + b;   // BUG: Should be a - b
            printf("Result = %d", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %d", result);
            // BUG: Missing break

        case 4:
            result = a / b;   // BUG: No check for division by zero
            printf("Result = %d", result);
            break;

        default:
            printf("Invalid Choice");
    }

    return 1;   // BUG: Normally return 0
}
