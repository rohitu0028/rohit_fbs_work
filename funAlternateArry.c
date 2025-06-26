void printAlternate(arr,n);

void main() 
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printAlternate(arr, n);
}

void printAlternate(int arr[], int size) {
    printf("Alternate elements in array: ");
    for(int i = 0; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
