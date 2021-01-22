#include<stdio.h>
int main()
{
	int arr[100],num,i,j,temp;
	printf("Enter the no of elements\n");
	scanf("%d",&num);
	printf("Elements are\n");
	for(i=0;i<num;i++)
	{
		
		scanf("%d",&arr[i]);
		printf("%d ",arr[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		printf("\n%d ",arr[i]);
	}
	
	return 0;
}
