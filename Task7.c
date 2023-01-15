#include<stdio.h>
main()
{
	int num, reverse=0, remainder;
	printf("Enter a number to check palindrome. \n");
	scanf("%d", &num);
	int original=num;
	while (num!=0)
	{
	remainder=num%10;
	reverse=(reverse*10)+remainder;
	num=num/10;
	}
	printf("Reverse of this number is: %d \n", reverse);
	if (original==reverse)
	{
		printf("This is a palindrome number");
	}
	else
	{
		printf("This is not a palindrome number");
	}
}