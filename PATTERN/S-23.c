//spring-23
#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
                for(col=1; col<=2*row-1; col++)
{
      for(col=1; col<=2*row-1; col=col+1)
        {
            printf("%d ",col*2);

        }
}

        printf("\n");
    }
    return 0;
}
