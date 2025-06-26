int factorial(int num) {
    int fact = 1, i;
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

void main() {
    int n, i, temp, digit, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        
        while (temp > 0) {
            digit = temp % 10;
            sum = sum + factorial(digit);
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

}