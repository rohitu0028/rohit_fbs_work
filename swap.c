void main()
{
	int a,b,temp;
	printf("Enter the number (a):");
	scanf("%d",&a);
	
	printf("Enter the number (b):");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("After swapint:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}