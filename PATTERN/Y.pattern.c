
//Y-PATTERN
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,row,col,middle;
    printf("Enter Num : ");
    scanf("%d",&num);
    middle=num/2;
    for(row=0; row<=middle; row++)
    {
        for(col=0; col<num; col++)
        {
            if(row==col|| col==num-row-1 )
                printf("Y");
            else
                printf(" ");
        }
        printf("\n");
    }
    //lower
    for(row=middle+1; row<=num; row++)
    {
        for(col=0; col<=num; col++)
        {
            if(col==middle )
                printf("Y");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

