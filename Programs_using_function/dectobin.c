#include<stdio.h>
int dectobin(int decnum)
{
	int i=1,rem,bin=0;
	while(bin!=0){
		rem=decnum%2;
		bin=bin+rem*i;
		decnum=decnum/2;
		i=i*10;
	}
	return bin;
	
}
int main()
{
	int decnum,bin;
	printf("Enter any decimal number:\n");
	scanf("%d",&decnum);
	bin = dectobin(decnum);
	printf("%d",bin);
	
	return 0;
	
	
}
