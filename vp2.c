#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,a1,a2,a3,a4;
	printf("Enter the token number 1 and age 1\n");
	scanf("%d%d",&n1,&a1);
	printf("Enter the token number 2 and age 2\n");
	scanf("%d%d",&n2,&a2);
	printf("Enter the token number 3 and age 3\n");
	scanf("%d%d",&n3,&a3);
	printf("Enter the token number 4 and age 4\n");
	scanf("%d%d",&n4,&a4);
	if(a1>a2)
	{
		printf("%d\n",n1);
	}
	 if(a1>a3)
	{
	 printf("%d\n",n1);	
	}
	if(a2>a3)
	{
	 printf("%d\n",n2);	
	}
	 if(a3>a4)
	{
		printf("%d\n",n3);
	}
	 if(a4>a1)
	{
		printf("%d\n",n4);
	}
	printf("The token numbers are %d %d %d  ",n4,n2,n1);
	return 0;
	
}
