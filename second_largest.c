#include<stdio.h>
int main()
{
	int a[100],i,size,j,temp;
	printf("Enter size of the array\n");
	scanf("%d",&size);
	printf("\nEnter numbers\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
	
	printf("The number in ascending order is\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;	
			}
		}
		printf("%d\n",a[i]);
	}
	printf("The second largest number is %d",a[i-2]);
	
	return 0;
}
