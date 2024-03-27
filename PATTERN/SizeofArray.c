#include<stdio.h>

int main()
{
    int num[]={1,2,3,34,4};
    int sizeofArray=sizeof(num)/ sizeof(num[0]);

    printf("%d",sizeofArray);
    return 0;
}
