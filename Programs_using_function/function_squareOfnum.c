#include<stdio.h>
void square(int a)
{
	int b=a*a;
	
	printf("The square of %d is %d",a,b);
}
int main()
{
	int a;
	printf("Enter any number:\n");
	scanf("%d",&a);
	square(a);
	return 0;
}
