// a14 06
#include<stdio.h>
void swap(int* a, int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int a[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
}
int main()
{
    int n=10,a[n],i;
    printf("Input 10 integer elements into array: ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The array is: ");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    sort(a,n);
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
