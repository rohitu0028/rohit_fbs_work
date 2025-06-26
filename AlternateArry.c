void main() 
{
    int arr[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements in the array are:\n");
    for(i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
}