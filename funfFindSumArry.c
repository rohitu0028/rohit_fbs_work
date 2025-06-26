
int findSum(arr,n);
void main() 
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = findSum(arr, n);
    printf("Sum of all elements: %d\n", total);
}

int findSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}