#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("Enter any number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("The reversed num is %d",rev);
	return 0;
}

