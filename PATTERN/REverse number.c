#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,f=0,s=1,fib=0,count=0;
    printf("Enter Num : ");
    scanf("%d",&num);
   // temp=num;
while(count<num)
    {
        if(count<=1)
             fib=count ;
        else
      {
          fib=f+s;
       f=s;
       s=fib;

      }

printf("%d ",fib);
count++;
    }
    //printf("%d",fib);
    return 0;
}


