#include<stdio.h>

int main()
{   int r,c;
    scanf("%d%d",&r,&c);

    int matrix[r][c];
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nRow-wise :");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",matrix[i][j]);
        }
      //  printf("\n");
    }
    printf("\nColumn-wise :");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ",matrix[j][i]);
        }
      //  printf("\n");
    }
            printf("\n");

    return 0;
}