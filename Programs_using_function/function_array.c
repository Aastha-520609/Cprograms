#include<stdio.h>
void show(int a[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
void showChar(char b[])
{
	int j;
	int length;
	length=sizeof(b)/sizeof(char);
	for(j=0;j<length;j++)
	{
		printf("%c ",b[j]);
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	char b[5]={'a','b','c','d','e'};
	char c[6]={'m','n','o','p','q','r'};
	
	show(a);
	showChar(b);
	showChar(c);
	
	return 0;
}
