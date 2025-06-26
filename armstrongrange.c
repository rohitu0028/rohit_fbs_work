void main() 
{
    int n, num, digit, sum, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while (num > 0) {
            digit = num % 10;
            sum = sum + (digit * digit * digit);
            num = num / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
}