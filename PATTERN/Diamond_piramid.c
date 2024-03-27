//diamond piramid
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
        for(col=1; col<=row; col++)
        {
            printf(" *");
        }
        printf("\n");
    }
      for(row=num-1; row>=1; row--)

    {
        for(col=1; col<=(num)-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf(" *");
        }
        printf("\n");
    }
   /* for(row=1; row<=num; row++)

    {
        for(col=1; col<=(num)-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
      for(row=num-1; row>=1; row--)

    {
        for(col=1; col<=(num)-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    //try your own logic
    return 0;
}
