// a14 05
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Input any 10 numbers into the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered array is: ");
    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    int min=a[0];
    for(i=0;i<10;i++)
    {
        if (min>=a[i])
        {
            min=a[i];
        }
    }
    printf("\nThe smallest number in the array is %d",min);
    return 0;
    
}
