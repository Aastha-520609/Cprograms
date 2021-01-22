#include<stdio.h>
void evenorodd(int num)
{
  if(num%2==0){
		printf("%d is even number",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
		
}
int main()
{
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	evenorodd(num);
	return 0;
	
}
