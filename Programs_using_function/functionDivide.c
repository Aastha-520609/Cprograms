#include<stdio.h>
void divide(int n,int p)//the no of parameter should be equal to value pass like here are a and b
{  int remainder;
	remainder=n/p;
	printf("%d ",remainder);
}
int main(){
	int a=60;
	int b=30;
	divide(a,b);//provides the value to function
	
	return 0;
	
}//the function name and the name from where we pass value should be same 
