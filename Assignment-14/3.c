// a14 03
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Input any 10 numbers into the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum_e=0,sum_o=0;
    for(i=0;i<10;i++)
    {
        if (a[i]%2==0)
            sum_e+=a[i];
        else
            sum_o+=a[i];
    }
    printf("The sum of odd elements in the array is %d\n",sum_o);
    printf("The sum of even elements in the array is %d\n",sum_e);
    return 0;
}
