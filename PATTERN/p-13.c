#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(j=1; j<= 2 * (n - i); j++)
        {
            printf("_");
        }
        for(int k=i; k>=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}

/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Printing numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Printing spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf("_");
        }

        // Printing numbers in decreasing order

        printf("\n");
    }

    return 0;
}
*/
