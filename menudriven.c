void main() 
{
    int num, choice, i, temp, digit, sum = 0, reverse = 0, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
            break;

        case 2:
            if (num <= 1) {
                isPrime = 0;
            } else {
                for (i = 2; i < num; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
                printf("%d is a Prime number\n", num);
            else
                printf("%d is NOT a Prime number\n", num);
            break;

        case 3:
            temp = num;
            reverse = 0;
            while (temp > 0) {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }
            if (reverse == num)
                printf("%d is a Palindrome\n", num);
            else
                printf("%d is NOT a Palindrome\n", num);
            break;

        case 4:
            if (num > 0)
                printf("%d is Positive\n", num);
            else if (num < 0)
                printf("%d is Negative\n", num);
            else
                printf("Number is Zero\n");
            break;

        case 5:
            temp = num;
            reverse = 0;
            while (temp != 0) {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }
            printf("Reverse of %d is %d\n", num, reverse);
            break;

        case 6:
            temp = num;
            sum = 0;
            while (temp != 0) {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }
            printf("Sum of digits of %d is %d\n", num, sum);
            break;

        default:
            printf("Invalid choice. Please select 1 to 6.\n");
    }
}