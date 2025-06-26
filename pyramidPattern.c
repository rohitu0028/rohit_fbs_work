void main() 
{
    int n, i, j, space, star;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (space = 0; space < n - i; space++) {
            printf(" ");
        }
        
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
}