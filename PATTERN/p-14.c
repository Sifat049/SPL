//P-14
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
            if(num<=3)
        {
             if(col==1|| row==1  ||col==num || row==num   )
                printf("*");
            else
                printf("_");
        }
         else{

            if(col==1|| row==1  ||col==num || row==num  || row==(num/2)+1 )
                printf("*");
            else
                printf("_");
           }
        }
        printf("\n");
    }
    return 0;
}

