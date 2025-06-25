int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

void main() {
    int n, original, digit, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Calculate sum of factorials of digits
    while(n > 0) {
        digit = n % 10;
        sum += factorial(digit);
        n = n / 10;
    }

    // Check if it's a Strong number
    if(sum == original) {
        printf("Strong\n");
    } else {
        printf("Not Strong\n");
    }

}