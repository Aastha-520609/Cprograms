#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,a1,a2,a3,a4;
    printf("Enter token and age\n");
    scanf("%d %d",&n1,&a1);
    scanf("%d %d",&n2,&a2);
    scanf("%d %d",&n3,&a3);
    scanf("%d %d",&n4,&a4);
    if(a1>a2||a1>a3||a1>a4)
    {
        printf("%d\n",n1);
    }
     if(a2>a3||a2>a4||a2>a1)
    {
        printf("%d\n",n2);
    }
     if(a3>a4||a3>a2||a3>a1)
    {
        printf("%d\n",n3);
    }
     if(a4>a1||a4>a2||a4>a3)
    {
        printf("%d\n",n4);
    }
    return 0;
}
