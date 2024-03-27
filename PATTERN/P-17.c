#include <stdio.h>

int main()
{   int n;
    printf("Enter an odd integer: ");
    scanf("%d", &n);
    int i, j;
    int middle = (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if(i>middle)
          { 
            if (i == middle || j == middle || i==j ||i+j==middle+1 ) {
            printf("$");
           }
            else {
              printf("_");
            }}
            else{ if (i == middle || j == middle  || i+j==middle+1 ) {
                printf("$");
            }
            else {
                printf("_");
            }}
        }
        printf("\n");
    }


    return 0;
}
