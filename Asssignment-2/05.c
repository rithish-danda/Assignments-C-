// 05
#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0,i;
    printf("Input any three digit number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        sum+=i;
        n=n/10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}
