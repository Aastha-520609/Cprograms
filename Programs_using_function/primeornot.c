#include<stdio.h>
void primeornot(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
	     	count=count+1;
	}
	if(n==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("\n%d is not a prime number",n);
	}


}
int main()
{
	int n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	primeornot(n);
	return;
}
