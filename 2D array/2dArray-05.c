#include<stdio.h>

int main()
{   int n;
puts(Input n size Squared Matrix);
    scanf("%d",&n);
    //puts(Input n size Squared Matrix);
    int matrix[n][n];
    int i,j;
 
    printf("\nIdentity Matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {   if(i==j)
            printf("1 ",matrix[i][j]);
            else
            printf("0 ");
        }

        printf("\n");
    }
        printf("\n");

    return 0;
}