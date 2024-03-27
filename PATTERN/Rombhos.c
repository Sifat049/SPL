#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,row,col;
    printf("Enter Num : ");
    scanf("%d",&num);
    for(row=1; row<=num; row++)

    {
        for(col=1; col<=(num)-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=num+1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    //right to left

        for(row=1; row<=num+1; row++)

    {
        for(col=num; col>=(num+1)-row; col--)
        {
            printf(" ");
        }
        for(col=1; col<=num; col++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
