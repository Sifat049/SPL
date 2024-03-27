#include<stdio.h>

int main()
{   int i,j,n;
    puts("ENTER any NUMBER: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=n; j>=1; j--)
        {
            printf("*",j);
        }
        printf("\n");
    }
    return 0;
}