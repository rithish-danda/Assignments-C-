// a06 01
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Input the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of first %d natural numbers is %d",n,sum);
    return 0;
}
