void main() 
{
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == j || (i + j) == n + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
