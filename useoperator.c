int main()
 {
    int num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    if (op == '+') {
        printf("Result = %d\n", num1 + num2);
    } else if (op == '-') {
        printf("Result = %d\n", num1 - num2);
    } else if (op == '*') {
        printf("Result = %d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0)
            printf("Result = %d\n", num1 / num2);
        else
            printf("Division by zero is not allowed.\n");
    } else if (op == '%') {
        if (num2 != 0)
            printf("Result = %d\n", num1 % num2);
        else
            printf("Modulus by zero is not allowed.\n");
    } else {
        printf("Invalid operator.\n");
    }
}