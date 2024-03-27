
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5;
 system("color 53");
     printf("%d\n",a + a + ++a  +a +a );
    return 0;
}
/*#include <stdio.h>

int main() {
    int i, j;
    int size = 15; // You can change this to adjust the size of the 'H'

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(j == 0 || j == size - 1 || i == size / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


int number,row,col;
scanf("%d",&number);
for(row=1; row<=number ; row++)
{
    for(col=1; col<=number ; col++)
    {
        if(row ==col || col==1 || row==1)
        {
            printf("*");
        }

            printf("5");

        }
        printf("\n");

    }
     //
    int number,row,col;

    scanf("%d",&number);
system("color 07");
    for(row=1; row<=number ; row++)
    {
        for(col=1; col<=number ; col++)
        {
            if(col==1 || col==number)
                printf("*");
                else if (number/2==row)
                {
                                    printf("*");

                }
            else
            {
                printf("   ");
                            }

        }        printf("\n");
    }*/
