// a14 04
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
    int max=a[0];
    for(i=0;i<10;i++)
    {
        if (max<=a[i])
        {
            max=a[i];
        }
    }
    printf("\nThe greatest number in the array is %d",max);
    return 0;
    
}
