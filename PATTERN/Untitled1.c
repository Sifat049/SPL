#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n[10],m,max2=0,max=0;
    scanf("%d",&m);
    for(i=0 ; i<m; i++)
    {
        scanf("%d",&n[i]);
    }
        if(n[0]<n[1])
        {
            max=n[1];
            max=n[0];
        }
        else
        {
            max=n[0];
            max=n[1];
        }
 for(i=0 ; i<m; i++)
    {
        if(max<n[i])
        {
            max2=max;
            max=n[i];
        }
               else if(max2<n[i] && n[i] !=max)
        {
            max2=n[i];
        }
    }
    printf("%d\n",max2);
    //   printf("%d\n",n[i]);

    return 0;
}

/*
#include <stdio.h>

int main() {
    int array[50], size, i, largest, second_largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize largest and second_largest with first two elements of array
    if (array[0] > array[1]) {
        largest = array[0];
        second_largest = array[1];
    } else {
        largest = array[1];
        second_largest = array[0];
    }

    // Find largest and second largest elements
    for (i = 2; i < size; i++) {
        if (array[i] > largest) {
            second_largest = largest;
            largest = array[i];
        } else if (array[i] > second_largest && array[i] != largest) {
            second_largest = array[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second_largest);

    return 0;
}
*/
