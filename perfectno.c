void main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    if(sum == n) {
        printf("Perfect\n");
    } else {
        printf("Not Perfect\n");
    }
}