#include<stdio.h>
#include<math.h>
int main()
{
	int bin,rem=0,dec=0,i=0;
	printf("Enter any binary number\n");
	scanf("%d",&bin);
	printf("The number is %d",bin);
	while(bin>0)
	{
		rem=bin%10;
		dec=dec+rem*pow(2,i);
		bin=bin/10;
		i++;
	}
	
	printf("\nThe decimal number is %d",dec);
	return 0;
}

