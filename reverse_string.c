#include<stdio.h>
int main()
{
	char name[10],i,length;
	printf("Enter any character\n");
	scanf("%s",&name);
	printf("%s",name);
	printf("\nlength of the string %zu\n",strlen(name));
	length=strlen(name);
	for(i=length-1;i>=0;i--)
	{
	   printf("%c",name[i]);	
	}
	return 0;
}
