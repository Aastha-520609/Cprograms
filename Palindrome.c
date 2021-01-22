#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Original num is %d",num);
	int org=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\nReversed num is %d",rev);
	if(org == rev)
	{
		printf("\n %d is a palindrome number",org);
	}
	else
	{
		printf("\n %d not a palindrome number",org);
	}
	return 0;
}
