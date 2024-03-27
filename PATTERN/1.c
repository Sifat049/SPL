#include<stdio.h>
#include<windows.h>
int main()
{
    int row,col,n;
    printf("Number Of Rows: ");
    scanf("%d",&n);
//S
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(col==1 || row==1 || row==n)
                printf(" S ");
            Sleep(200);
        }
        printf("\n");

    }
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(  row==n || col==n)
            {
                printf(" S ");
                Sleep(200);

            }
            else
                printf("   ");
            Sleep(200);

        }
        printf("\n");

    }
    printf("\n\n");

//I
    for(row=1; row<=2*n; row++)
    {
        for(col=1; col<=2*n; col++)
        {
            if(   col==n/2+1)
                printf("I ");
            else
                printf("  ");
        }

        printf("\n");
    }
    printf("\n\n");
//F
    for(row=1; row<=2*n; row++)
    {
        for(col=1; col<=2*n; col++)
        {
            if(col==1 || row==1 || row==2*n/2+1)
            {
                printf("* ");
                Sleep(200);
            }
        }
        printf("\n");
    }
    printf("\n\n");
//A

    for(row=1; row<=n; row++)
    {
        for(col=row; col<=5; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            if( row!=n )
                if( row==3 &&   col==2 )
                    printf("  ");
                else
                    printf("A ");
            continue;
            if(row==n-1 && (col==1 || col==row))
                printf("A ");
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
//T
    for(row=1; row<=2*n; row++)
    {
        for(col=1; col<=2*n; col++)
        {
            if(col==2*n/2+1 || row==1 )
                printf("T ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
