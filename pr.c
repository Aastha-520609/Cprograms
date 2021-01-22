#include <stdio.h>

int main() {
    int n, a[100], i, j;
    int found;
    found = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            printf("%d \n", a[j]);
            found = 1;
        }
    }
    if(!found)
       printf("Not found");
    
    return 0;
}
