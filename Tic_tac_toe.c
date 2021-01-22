#include<stdio.h>
int main()
{
	int board[3][3]={{0,0,0},{0,0,0},{0,0,0}},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d %d]= ",i, j);
			scanf("%d ",&board[i][j]);
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
	return 0;
}
