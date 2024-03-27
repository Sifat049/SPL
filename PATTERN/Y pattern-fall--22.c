#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    int mid=n/2;
    for(i=1; i<=n; i++)
    {for(j=1; j<=n/2; j++ )
    {
        printf(" ");
    }
        for(j=1; j<=n; j++)
        {
            if((i/2==j/2 ) || (i+j==n+1   ) )
                printf("*");
                else
                    printf("_");
        }
        printf("\n");
    }


    return 0;
}
