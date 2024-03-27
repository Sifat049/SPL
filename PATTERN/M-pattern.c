//P-18
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,row,col;
    printf("Enter Num : ");
    scanf("%d",&num);

    for(row=1; row<=num/2+1; row++)
    {
        for(col=1; col<=num; col++)
        {
            if( col==1  ||col==num ||col==row || row+col==(num+1) )
                printf("M ");
            else
                printf("  ");
        }
        printf("\n");
    }
      for(row=1; row<=num/2; row++)
    {
      for(col=1; col<=num; col++)
        {
            if( col==1  ||col==num  )
                printf("M ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

    // I..........

    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num/2; col++)
                            printf("  ");
        for(col=1; col<=num; col++)

        {
            if(col==1)
                printf("I ");
        }
        printf("\n");
    }
            printf("\n\n");

    //H........
        for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(col==1  ||col==num || row==(num/2)+1    )
                printf("H ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

            //K.....
               for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(col==1  ||col/2==row )
                printf("K");
            else
                printf(" ");
        }
        printf("\n");
    }
            printf("\n\n");

               //T........
        for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(row==1  ||col==(num/2)+1    )
                printf("T ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

                           //U........
        for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(row==num  ||col==1 ||col==num    )
                printf("U ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

               //F........
        for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(row==1 ||col==1  ||row==(num/2)+1    )
                printf("F ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");
    return 0;

}


