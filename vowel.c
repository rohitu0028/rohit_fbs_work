void main()
{
	char ch;
	printf("Enter a charector:");
	scanf("%c",&ch);
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		printf("%c is vowel.\n",ch);
	}else {
		printf("%c is consonant.\n",ch);
	}
}
}