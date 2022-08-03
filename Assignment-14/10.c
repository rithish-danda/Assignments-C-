// a14 10
#include<stdio.h>
int main()
{
    int i,n;
    printf("Input the no. of elements in the list: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Input the elements into the array:  ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=a[i];
    printf("Copied array is: ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
