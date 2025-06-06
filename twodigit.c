void main()
{
	int number, lastTwoDigits;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastTwoDigits = number % 100;

    printf("Last two digits: %d\n", lastTwoDigits);
}