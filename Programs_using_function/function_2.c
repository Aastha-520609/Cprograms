#include<stdio.h>
void multiply(int a,int b,int c)
{
	int mul;
	mul=a*b*c;
	printf("%d ",mul);
}
int main()
{
	int a=2,b=3,c=4;
	int x=10,y=20,z=30;
	multiply(a,b,c);
	multiply(x,y,z);
	return 0;
}
