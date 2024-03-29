#include<stdio.h>

int main()
{   int n;
    scanf("%d",&n);

    int matrix[n][n];
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
      printf("\nMatrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",matrix[i][j]);
        }
           printf("\n");
    }
    printf("\nMajor Diagonal :");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {   if(i==j)
            printf("%d ",matrix[i][j]);
        }
      // printf("\n");
    }
        printf("\n");
printf("\nMinor Diagonal :");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {   if(i+j==n-1)
            printf("%d ",matrix[i][j]);
        }
    }
        printf("\n");
    return 0;
}