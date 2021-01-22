#include<stdio.h>
int main()
{
  int row,col,mat1[10][10],mat2[10][10],i,j,res[10][10];
  printf("Enter row and coloumn\n");
  scanf("%d%d",&row,&col);
  printf("Enter mat1\n");
  for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{
  		scanf("%d",&mat1[i][j]);
	}
  }
  printf("Enter mat2\n");
   for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{
  		scanf("%d",&mat2[i][j]);
	}
  }
   printf("Enter resultant\n"); 
   for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{
  	 res[i][j]=mat1[i][j]+mat2[i][j];	
	}
  }
   for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{
  	 printf("%d  ",res[i][j]);
	}
	printf("\n");
  }
  
  return 0;
}
