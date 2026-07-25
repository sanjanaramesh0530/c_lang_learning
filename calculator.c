int main() {
    double num1;
    double num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("Result: %lf\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result: %lf\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result: %lf\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %lf\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator. Please enter +, -, *, or /.\n");
    }

    return 0;
}