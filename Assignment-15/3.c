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
    int n,i;
    printf("No. of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Input %d integer(s) elements into array: ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     return 0;
}
