void main() 
{
    int n, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    if(original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
}