void main()
 {
    int start, end, sum = 0, i;
    
    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);
    
    for(i = start; i <= end; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}