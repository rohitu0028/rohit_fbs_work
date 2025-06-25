void main()
{
	char ch;
	
	printf("Enter a Charactor:");
	scanf("%c",&ch);
	
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("%c is UPPERCASE.\n",ch);
	}
	else if(ch >= 'a' && ch <= 'z') {
		printf("%c is lowercase.\n",ch);
	}
	else {
		printf("%c is no letter.\n",ch);
	}
}