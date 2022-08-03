// a15 02
#include<stdio.h>
int minOfArray(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>=a[i])
            min=a[i];
    }
    return min;
}
int main()
{
    int i,n,smallest;
    printf("No .of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Input %d element(s) into the array: ",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest = minOfArray(a,n);
    printf("The smallest number in the array is %d",smallest);
    return 0;
}
