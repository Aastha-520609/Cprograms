#include<stdio.h>
int main()
{
	int r,c,mat1[10][10],i,j,count=0,diagonal[10];
	scanf("%d",&r);
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			print("%d",mat1[i][j]);
		}
	}

	
	return 0;
}
