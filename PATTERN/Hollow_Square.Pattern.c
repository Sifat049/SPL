//Hollow_Square/Pattern
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,r,temp=0,reverse=0;
    printf("Enter Num : ");
    scanf("%d",&num);
    temp=num;
while(temp!=0)
{
    r=temp%10;
    reverse*=10+r;
    temp/=10;
}
printf("%d",reverse);
    return 0;
}

