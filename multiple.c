#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Table of %d:\n",n);
	for(i=1;i<=10;i++)
	{
		m=i*n;
		printf("%d\n",m);
	}
	return 0;
}
