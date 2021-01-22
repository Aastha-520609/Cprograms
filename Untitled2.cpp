#include<stdio.h>
void largestinarray(int n,int array[])
{
	int temp,i,j;
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
		    if (array[j]<array[i])
		        {
			         temp=array[j];
		         	array[j]=array[i];
			         array[i]=temp;
		        }
		}
		printf("%d ",array[i]);
		
	}
	
}
int main()
{
	int n;
	printf("Enter the no of size\n");
	scanf("%d",&n);
	int array[10],i;
	for(i=0;i<=n;i++)
	{
		scanf("%d",array[i]);
	}
	largestinarray(n,array);

	return 0;
}
