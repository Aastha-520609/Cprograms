#include<stdio.h>
int main()
{
	int a[100],i,size,j;
	printf("Enter size of the array\n");
	scanf("%d",&size);
	printf("\nEnter numbers\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
	for(j=0;j<size-1;j++)
	{
		if(a[j]>a[j+1])
     	   {
		    printf("\n%d",a[j]);
	       }	
		
	} 

	return 0;
}
	
