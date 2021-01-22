#include<stdio.h>
int main()
{
	int f=0,s=1,n,num,i;
	printf("Enter the no of elements:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d ",f);
		n=f+s;
		f=s;
		s=n;
	}
	return 0;
	
}
	
