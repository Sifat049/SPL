//Q-5B
/*
#include<stdio.h>
int main() {
int num,i,j;
scanf("%d", &num);
for(i=num; i>=1; i--)
{
    for(j=2*i; j>=1; j-=2)
    {

        printf("%d ",j);

    }
    printf("\n");
}

    return 0;
}
*/
#include<stdio.h>
int main() {
int num,i,j;
scanf("%d", &num);
for(i=num/2+1; i>=1; i--)
{
    for(j=1; j<=(num/2+1)-i; j++)
    {
        printf(" ");
    }
    for(j=i; j>=1; j-=1)
    {
        if(i==j  || j==1 )
        printf("* ",j);
        else
            printf("  ");
    }
    printf("\n");
}
for(i=num; i>=1; i--)
{
    for(j=num; j>=1; j-=1)
    {
        if(j==num/2+1 )
        printf("*",j);
        else
            printf("  ");
    }
    printf("\n");
}

    return 0;
}
