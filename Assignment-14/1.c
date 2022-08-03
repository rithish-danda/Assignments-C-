// a14 01
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Input any 10 numbers into the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of elements in the array is %d",sum);
    return 0;
}
