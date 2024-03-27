
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
           // if(row==num ||row==col )
            printf(" *");
        }
        printf("\n");
    }
        return 0;
}
