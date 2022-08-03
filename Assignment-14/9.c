// a14 09
#include<stdio.h>
int main()
{
    int i,n;
    printf("Input the no. of elements in the list: ");
    scanf("%d",&n);
    int a[n];
    printf("Input the elements into the array:  ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The array in reverse order is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[n-1-i]);
    return 0;
}
