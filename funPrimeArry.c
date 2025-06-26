void mergeArrays(a,b,c,n1,n2);
void printArray(arr,n);
void main() 
{
    int a[100], b[100], c[200];
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    mergeArrays(a, b, c, n1, n2);

    printf("Merged array: ");
    printArray(c, n1 + n2);
}

void mergeArrays(int a[], int b[], int c[], int size1, int size2) {
    for(int i = 0; i < size1; i++) {
        c[i] = a[i];
    }
    for(int i = 0; i < size2; i++) {
        c[size1 + i] = b[i];
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
