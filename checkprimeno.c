void main()
 {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        isPrime = 0;
    }

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
}