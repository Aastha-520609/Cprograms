#include<stdio.h>

/*int main()
{
	int dec,rem=1,bin=0,i=1;
	printf("Enter any decimal number\n");
	scanf("%d",&dec);
	printf("The decimal number is %d",dec);
	while (dec>0)
	{
		rem=dec%2;
		bin=bin+rem*i;
		dec=dec/2;
		i=i*10;
	}
	 
    printf("\nThe binary number is %d",bin);
	return 0;	
}*/
int main()
{
	int dec,a[10],i,j;
	printf("Enter any decimal number\n");
	scanf("%d",&dec);
	printf("The decimal number is %d",dec);
	for(i=0;dec>0;i++)
	{
		a[i]=dec%2;
		dec=dec/2;
	}
	printf("\nThe binary num is ");
    for(j=i-1;j>=0;j--)
    {
    	printf("%d",a[j]);
	}
    return 0;
	
}
