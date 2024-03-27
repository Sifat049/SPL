/*#include<stdio.h>
int main()

{
int a=39/2;
int b=39.0/2;
float c=39.0/2;
float d=39/2;
int e=39%4;
float f= (float) (4%39);
printf("%f",d);
return 0;
}


#include<stdio.h>
int main()

{
int a[500];
int i,n,sum=0;

scanf("%d",&n);
      for(i=0; i<n; i++)
      {
          scanf("%d",&a[i]);

      }
        for(i=0; i<n; i++)
      {
         printf("%d ",a[i]);
         if(a[i]%2!=0)
            sum+=a[i];

      }         printf("\n\n%d",sum);

return 0;
}

#include<stdio.h>
#include<math.h>
int main()

{
int i,n,p,sum=0;

scanf("%d",&n);
      for(i=1; i<=n; i++)
      {
                   p=pow(i,2);
                  sum+=p;


          if(i%2==0)
          sum-=p;
printf("\n\n%d",i);


      }         printf("\n\n%d",sum);

return 0;
}

#include<stdio.h>
#include<math.h>

int main() {
int s[50];
int i, n;
 scanf("%d",&n);

for(i=0;i<n; i++) {
 scanf("%d",&s[i]);}
int min=s[0];
for(i=0;i<n; i++) {
 //scanf("%d",&s[i]);
 if(min>s[i])
    min=s[i];
}
    printf("index %d: %d",s[i],min);


return 0;
}

#include<stdio.h>
int main(){
    int x;
   scanf("%d", &x);
switch (x){
case 0: printf("Good"); break;
case 3: printf("Morning");
case 7: printf("Hello"); break;
case 11: printf("World");
case 17: printf("Best"); break;
case 21: printf("Wishes!");
default: printf("Invalid answer");}
return 0;
}
*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Printing the series and calculating the sum
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        int term = (i - 1) * (i + 4);
        sum += term;
        printf("%d", term);
        if (i != n)
            printf(", ");
    }

    // Printing the sum
    printf("\nSum = %d\n", sum);

    return 0;
}
