
int searchNumber(arr,n,key);

void main() 
{
    int arr[100], n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    int result = searchNumber(arr, n, key);

    if(result == -1) {
        printf("Number %d not found in the array.\n", key);
    } else {
        printf("Number %d found at index %d.\n", key, result);
    }
}

int searchNumber(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}