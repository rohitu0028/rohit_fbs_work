void main()
 {
    int num=123, original, reverse, digit1, digit2, digit3;

    if (num >= 100 && num <= 999) {
        original = num;

        digit1 = num / 100;
        digit2 = (num / 10) % 10;
        digit3 = num % 10;

        reverse = digit3 * 100 + digit2 * 10 + digit1;

        if (original == reverse) {
            printf("%d is a palindrome number.\n", original);
        } else {
            printf("%d is NOT a palindrome number.\n", original);
        }

    } else {
        printf("Please enter a valid 3-digit number.\n");
    }

}