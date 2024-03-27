#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,row,col;
    printf("Enter Num : ");
    scanf("%d",&num);
    for(row=1; row<=num; row++)

    {
        for(col=1; col<=num-row; col++)
        {
            printf("_");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(row==num ||col==num||row==col )
                printf("S");
            else
                printf("_");
        }
        printf("\n");
    }
 for(row=num-1; row>=1; row--)

    {
        for(col=1; col<=num-row; col++)
        {
            printf("_");
        }
        for(col=1; col<=2*row-1; col++)
        {
                 if(row==num/2+1 ||col==num/2+1  )
                printf("S");
                 else
                printf("_");

                // printf("S");
        }
        printf("\n");
    }
    return 0;
}
