//P-16
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
            if(col==row   || col+row==num+1  )
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}


