#include<stdio.h>
int main()
{
	int num,rem,remainder;
	printf("Enter any number \n");
	scanf("%d",&num);
	if(num>9)
	{
		rem=num%100;
		if(rem>0)
		    {
			remainder=num%rem;
		    printf("The remainder of %d is %d",num,remainder);
			}
			else
			{
				printf("Division cant be performed");
			}
	}

	return 0;
	
} 
