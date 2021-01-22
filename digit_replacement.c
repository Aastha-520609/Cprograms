#include<stdio.h>
int main()
{
	int digit;
	printf("Enter no of digit\n");
	scanf("%d",&digit);
	int a[digit],i;
	for(i=0;i<digit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The digit are\n");
	for(i=0;i<digit;i++)
	{
		printf("%d",a[i]);
	}
	int po1,po2;
	scanf("%d",&po1);
	scanf("%d",&po2);
	return 0;
}
