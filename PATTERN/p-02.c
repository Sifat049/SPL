#include<stdio.h>

int main()
{   int i,j,n;
    int p=1;
printf("Enter any number : ");
scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==1)
            printf("%d",i);
            else
          printf("%d",p++);
            
        }
        printf("\n");
      
    }
    return 0;
}