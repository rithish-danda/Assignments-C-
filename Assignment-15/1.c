// a15 01
#include<stdio.h>
int maxOfArray(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<=a[i])
            max=a[i];
    }
    return max;
}
int main()
{
    int i,n,greatest;
    printf("No .of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Input %d element(s) into the array: ",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    greatest = maxOfArray(a,n);
    printf("The greatesr number in the array is %d",greatest);
    return 0;
}
