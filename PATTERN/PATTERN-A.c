//P-A
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,row,col;
    printf("Enter Num : ");
    scanf("%d",&num);
      for(row=1; row<=num; row++)

    {
        for(col=row; col<num; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(row==(num/2)+1 ||col==1 || col==(2*row-1))
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        return 0;
}

