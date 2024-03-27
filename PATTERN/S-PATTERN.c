//P-S
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,row,col;
    printf("Enter Num : ");
    scanf("%d",&num);

    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if( col==1  ||row==1 || row==num)
                printf("S");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if( col==num   || row==num)
                printf("S");
            else
                printf(" ");
        }
        printf("\n");
    }

        return 0;
}
