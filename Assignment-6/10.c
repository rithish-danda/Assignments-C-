// a06 10
#include<stdio.h>
int main()
{
    int n,n1,t,r=0;
    printf("Input any number: ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        t=n1%10;
        r=r*10+t;
        n1=n1/10;
    }
    printf("The reversed number of %d is %d",n,r);
    return 0;
}
