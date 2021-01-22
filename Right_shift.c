#include<stdio.h>
int main()
{
	int size,i,m,count=0;
	printf("Enter the size of the array:\n");
	scanf("%d ",&size);
	int array1[size],array2[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&array1[i]);
		printf("%d ",array1[i]);
	}
	printf("\nEnter the value of m:\n");
	scanf("%d",&m);
	for(i=0;i<size;i++)
	{
		if(i<size-m)
		{
			array2[i+m]=array1[i];
		}
		else
		{
			array2[count]=array1[i];
			count=count+1;
		}
		
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",array2[i]);
	}
	return 0;
}
