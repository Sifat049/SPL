#include<stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        //space
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1 ;k++)
        {
                       printf("*");
        }
                    printf("\n");
    }
    //lowerr part
   for(i=n-1; i>=1; i--)
    {
        //space
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1 ;k++)
        {
                       printf("*");
        }
                    printf("\n");
    }
    return 0;
}
