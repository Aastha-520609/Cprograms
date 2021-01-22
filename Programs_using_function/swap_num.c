#include<stdio.h>

int swapping(int n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	return();
	
	
}
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	printf("Entered number are %d and %d",n1,n2);
	swapping(n1,n2);
	printf("\n%d %d \n",n1,n2);
	
	return 0;
}
