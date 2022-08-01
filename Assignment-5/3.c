//a05 03
#include<stdio.h>
int main()
{
    int n=10,i=1,x;
    printf("Enter the value of n: ");
    scanf("%d",&x);
    while(i<=x)
        {
            printf("%d\n",n);
            i++;
            n=n-1;
        }
    return 0;
}
