#include<stdio.h>
#include<conio.h>
int main()
{
	int hours,mins,amt=0;
	printf("Enter the no of hours:");
	scanf("%d",&hours);
	printf("/nEnter the no of mins:");
	scanf("%d",&mins);
	if(hours>7)
	{
		printf("Invalid Input");
	}
	else
	{
	
	  if(hours>=5)
	 {
		amt=200;
		hours=hours-5;
		amt=amt+hours*50+mins*1;
		printf("%d",amt);
	 
	 }
   }
	return 0;
}
